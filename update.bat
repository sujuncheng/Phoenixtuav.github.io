chcp 65001 
set HTTP_PROXY=http://127.0.0.1:7890
set HTTPS_PROXY=https://127.0.0.1:7890
$env:HTTP_PROXY="http://127.0.0.1:7890"; $env:HTTPS_PROXY="https://127.0.0.1:7890"
git pull
git add .
git commit -m "update"
git push
