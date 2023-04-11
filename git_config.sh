git config --global user.email "ludapevek@gmail.com"
git config --global user.name "leyalutik"
#for linux users
git config --global core.autocrlf input
git config --global core.safecrlf warn
#for output unicode text
git config --global core.quotepath off
cd .git
echo   '[alias]'	>> config
echo  'hist = log --pretty=format:\"%h %ad | %s%d [%an]\" --graph --date=short' >> config
 echo  ' type = cat-file -t'   >> config
   echo ' dump = cat-file -p'  >> config

   echo  '[user]'   >> config
   echo  'name = leyalutik' >> config
   echo  'email = ludapevek@gmail.com' >> config
