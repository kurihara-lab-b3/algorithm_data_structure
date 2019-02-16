/*
4.4 連結リスト
g++ -o 4_4_doubly_linked_list_2.exe 4_4_doubly_linked_list_2.cpp
./4_4_doubly_linked_list_2.exe
*/

#include <iostream>
#include<string>
using namespace std;

struct Node {
    int key;
    Node *prev, *next;
};

Node *nil;

void init();
void init() {
    nil = (Node *)malloc(sizeof(Node));
    nil -> next = nil;
    nil -> prev = nil;
}

void insert(int key);
void insert(int key) {
    Node *x = (Node *)malloc(sizeof(Node));
    x -> key = key;
    x -> next = nil -> next;
    nil -> next -> prev = x;
    nil -> next = x;
    x -> prev = nil;
}

void deleteNode(Node *t);
void deleteNode(Node *t) {
    if (t != nil ) {
        t -> prev -> next = t -> next;
        t -> next -> prev = t -> prev;
        free(t);
    }
}

void deleteFirst();
void deleteFirst() {
    deleteNode(nil -> next);
}

void deleteLast();
void deleteLast() {
    deleteNode(nil -> prev);
}

Node* listSearch(int key) {
    Node *cur = nil -> next;
    while ( cur != nil && cur -> key != key ) {
        cur = cur -> next;
    }
    return cur;
}

void deleteKey(int key);
void deleteKey(int key) {
    deleteNode(listSearch(key));
}

int main() {
    int n, key;
    char com[100];

    scanf("%d", &n);
    init();

    for ( int i = 0; i < n; i++ ) {
        scanf("%s %d", com, &key);
        if ( com[0] == 'i' ) {
            insert(key);
        } else if (com[6] == 'F' ) {
            deleteLast();
        } else if (com[6] == 'L' ) {
            deleteFirst();
        } else {
            deleteKey(key);
        }
    }

    Node *cur = nil -> next;

    while ( cur != nil ) {
        cout << cur -> key << " ";
        cur = cur -> next;
    }
    cout << endl;
    return 0;
}