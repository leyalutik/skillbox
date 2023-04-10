git add .
git config --global user.email "ludapevek@gmail.com"
git config --global user.name "leyalutik"
#for linux users
git config --global core.autocrlf input
git config --global core.safecrlf warn
#for output unicode text
git config --global core.quotepath off
git commit -m "111"
git remote add origin https://github.com/leyalutik/Skillbox.git
git push -u -f origin master
