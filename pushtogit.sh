git add .
git config --global user.email "ludapevek@gmail.com"
git config --global user.name "leyalutik"
echo ENTER the name of COMMIT:
read commt
git commit -m "$commt"
git status
echo  ENTER the name of BRANCH to push:
read brnch
git remote add origin https://github.com/leyalutik/Skillbox.git
git push origin $brnch
