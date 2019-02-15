# algorithm_data_structure
AOJ

## 運用方針

### 基本方針

主にGitとGithubに慣れるため
Pull RequestとCode Review, Issue, Projectにもみんなが慣れる

### ブランチ

基本的に最新のmasterからブランチは切る
みんながやったのをmasterにmergeしていき、masterを見れば全問題のコードが最終的にはあるようにしていく

#### ブランチの名称
名前_取り組んだ章
例えば 俺がソートの章の問題を解き終えたら
yutaro_yamanaka_sort というブランチでpushする。

基本手順 Sortを実装するとき

```
ex branchがmasterなのを確認
$ git pull origin master
$ git checkout -b yutaro_yamanaka_sort

このブランチで作業、終了したら
$ git add .
$ git commit -m "sortを解いた"
$ git push origin yutaro_yamanaka_sort
```

この後, masterへPull Requestを出す。
基本的に、一番最初にやった人をmasterにmergeしようかと。

### Issue

何に使うか考え中。こいつのコードのここおかしくね！っみたいなのでもいいや。

### Project

進捗管理に使えそう。
