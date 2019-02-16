/*
4.4 連結リスト
g++ -o 4_4_doubly_linked_list_1.exe 4_4_doubly_linked_list_1.cpp
./4_4_doubly_linked_list_1.exe
*/

#include <iostream>
#include<list>
#include<string>
using namespace std;

int main() {
    int n, key;
    char com[100];
    list<int> L;

    scanf("%d", &n);
    for ( int i = 0; i < n; i++ ) {
        scanf("%s %d", com, &key);
        if ( com[0] == 'i' ) {
            L.push_front(key);
        } else if (com[6] == 'F' ) {
            L.pop_back();
        } else if (com[6] == 'L' ) {
            L.pop_front();
        } else {
            for ( list<int>::iterator it =L.begin(); it != L.end(); it++ ) {
                if ( *it == key ) {
                    L.erase(it);
                    break;
                }
            }
        } 
    }
    for ( list<int>::iterator it =L.begin(); it != L.end(); it++ ) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}