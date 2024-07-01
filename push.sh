echo Input the description of COMMIT
read COMMIT
git add .
git commit -m $COMMIT
echo Input the BRANCH name
read BRUNCH
git push -u origin $BRUNCH
