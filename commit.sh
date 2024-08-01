echo Input the description of COMMIT
read answer
git add .
git commit -m "$(answer)"
