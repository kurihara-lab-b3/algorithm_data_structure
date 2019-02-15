/*
4.2 スタック
g++ -o 4_2_stack_1.exe 4_2_stack_1.cpp
./4_2_stack_1.exe
*/

#include <iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> S;
    int a, b;
    char s[100];

    while( scanf("%s", s ) != EOF ) {
        if ( s[0] == '+' ) {
            a = S.top();
            S.pop();
            b = S.top();
            S.pop();
            S.push(a + b);
        } else if ( s[0] == '-' ) {
            a = S.top();
            S.pop();
            b = S.top();
            S.pop();
            S.push(b - a);
        } else if ( s[0] == '*' ) {
            a = S.top();
            S.pop();
            b = S.top();
            S.pop();
            S.push(a * b);
        } else {
            S.push(atoi(s));
        }
    }
    
    cout << S.top() << endl;
    return 0;
}