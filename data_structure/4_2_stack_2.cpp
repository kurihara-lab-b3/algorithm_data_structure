/*
4.2 スタック
g++ -o 4_2_stack_2.exe 4_2_stack_2.cpp
./4_2_stack_2.exe
*/

#include <iostream>
#define LEN 1000
using namespace std;

int top, x, S[LEN];

void initialize();
void initialize() {
    top = 0;
}

bool isEmpty();
bool isEmpty() {
    return top == 0;
}

bool isFull();
bool isFull() {
    return top >= LEN - 1;
}

void push(int x);
void push(int x) {
    if ( isFull() ) {
        cout << "エラー：オーバーフロー" << endl;
    }
    top++;
    S[top] = x;
}

int pop();
int pop() {
    if ( isEmpty() ) {
        cout << "エラー：アンダーフロー" << endl;
    }
    top--;
    return S[top+1];
}

int main() {
    int a, b;
    char s[100];

    initialize();

    while( scanf("%s", s ) != EOF ) {
        if ( s[0] == '+' ) {
            a = pop();
            b = pop();
            push(a + b);
        } else if ( s[0] == '-' ) {
            a = pop();
            b = pop();
            push(b - a);
        } else if ( s[0] == '*' ) {
            a = pop();
            b = pop();
            push(a * b);
        } else {
            push(atoi(s));
        }
    }
    
    cout << pop() << endl;
    return 0;
}