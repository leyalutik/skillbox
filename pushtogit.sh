git add .
git config --global user.email "ludapevek@gmail.com"
git config --global user.name "leyalutik"
echo Enter the name of commit
read commt
git commit -m "$commt"
git status
echo enter the name of branch to push:
read brnch
git remote add origin https://github.com/leyalutik/Skillbox.git
git push origin $brnch
