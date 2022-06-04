echo "Please commit under AngularJS syntax."
$type= Read-Host -Prompt "Enter the type of commit"
$topic= Read-Host -Prompt "Enter the topic of commit"
$details= Read-Host -Prompt "Enter the details of commit"

git add .
git commit -m "$type($topic): $details"
git push git@github.com:KKtheGhost/CPL-Labs.git main