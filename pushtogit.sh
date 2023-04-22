git add .
git config --global user.email "ludapevek@gmail.com"
git config --global user.name "leyalutik"
echo ENTER the name of COMMIT:
read commt
git commit -m "$commt"
git status
echo  ENTER the name of BRANCH to push:
read brnch
git checkout -b $brnch
git tag "tag_$brnch"
git checkout -b "$brnch_remote"
rm -r -f build
rm -r -f HowToGit.txt
rm -r -f cmakerun.sh
rm -r -f 13_Tasks
git add .
git commit -m "commit to send to github"
ls
echo Has been deleted enough files? (To terminate \"ctrl+Z\")
read p
git remote add origin https://github.com/leyalutik/Skillbox.git
git push origin $brnch
git branch -d "$brnch_remote"

