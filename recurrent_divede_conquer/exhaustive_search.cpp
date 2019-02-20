#include <cstdio>
#include <iostream>
using namespace std;

int S[20];
int n;

/* pは階層、keyは見つけたいやつ、sumは足して作れる数 */
int solve(int p, int key, int sum){
  /*そんなものは作れない */
  if (key == 0) return 0;
  /* 全部使っても無理だった */
  if (p == n) return 0;
  if (sum == key){
    return 1;
  }
  /*選択するとき */
  return solve(p+1, key, sum + S[p]) || solve(p+1, key, sum);
}

int main(){
  cin >> n;
  int q, v, result;
  for(int i = 0; i < n; i++){
    cin >> v;
    S[i] = v;
  }

  cin >> q;
  for(int i = 0; i < q; i++){
    cin >> v;
    result = solve(0, v, 0);
    if (result == 1){
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
  return 0;
}/*選択しないとき *//*選択するとき */
