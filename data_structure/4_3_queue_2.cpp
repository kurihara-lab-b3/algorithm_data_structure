/*
4.3 キュー
g++ -o 4_3_queue_2.exe 4_3_queue_2.cpp
./4_3_queue_2.exe
*/

#include <iostream>
#include<string>
#define LEN 100005
using namespace std;

typedef struct pp {
    char name[100];
    int t;
} P;

P Q[LEN];
int head, tail, n;

void initialize();
void initialize() {
    head = tail = 0;
}

bool isEmpty();
bool isEmpty() {
    return head == tail;
}

bool isFull();
bool isFull() {
    return head == (tail + 1) % LEN;
}

void push(P x);
void push(P x) {
    if ( isFull() ) {
        cout << "エラー：オーバーフロー" << endl;
    }
    Q[tail] = x;
    tail = (tail + 1) % LEN;
}

P pop();
P pop() {
    if ( isEmpty() ) {
        cout << "エラー：アンダーフロー" << endl;
    }
    P x = Q[head];
    head = (head + 1) % LEN;
    return x;
}

int main() {
    int n, q;
    P u;

    initialize();

    scanf("%d %d", &n, &q);
    for ( int i = 0; i < n; i++ ) {
        scanf("%s %d", u.name, &u.t);
        push(u);
    }

    int elaps, a;

    elaps = 0;
    while ( !isEmpty() ) {
        u = pop();
        a = min(u.t, q);
        u.t -= a;
        elaps += a;
        if ( u.t > 0 ) {
            push(u);
        } else {
            cout << u.name <<  " " << elaps << endl;
        }
    }
    return 0;
}