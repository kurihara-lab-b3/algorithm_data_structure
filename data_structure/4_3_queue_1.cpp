/*
4.3 キュー
g++ -o 4_3_queue_1.exe 4_3_queue_1.cpp
./4_3_queue_1.exe
*/

#include <iostream>
#include<queue>
#include<string>
using namespace std;

int main() {
    int n, q, t;
    char name[100];
    queue<pair<string, int> > Q;

    scanf("%d %d", &n, &q);
    for ( int i = 0; i < n; i++ ) {
        scanf("%s %d", name, &t);
        Q.push(make_pair(name, t));
    }
    
    pair<string, int> u;
    int elaps = 0, a;
    
    while ( !Q.empty() ) {
        u = Q.front();
        Q.pop();
        a = min(u.second, q);
        u.second -= a;
        elaps += a;
        if ( u.second > 0 ) {
            Q.push(u);
        } else {
            cout << u.first <<  " " << elaps << endl;
        }
    }
    return 0;
}