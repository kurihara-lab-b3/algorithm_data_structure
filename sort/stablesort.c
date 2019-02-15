#include <stdio.h>

typedef struct card{
    char suit;
    char value;
} Card;

void selectsort(int a[], int n){
    int tmp, minj,flag;
    for(int i = 0; i < n; i++){
        minj = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[minj]){
                minj = j;
            }

        }
        tmp = a[i];
        a[i] = a[minj];
        a[minj] =tmp;
    
    }


}

void bubblesort(int A[], int n){
    int j, t;
    int flag = 1;
    for(int i = 0; flag; i++){
        flag = 0;
        j = n - 1;
        while(j > i){
            /* exchange */
            if(A[j - 1] >  A[j]){
                t = A[j - 1];
                A[j - 1] = A[j];
                A[j]  = t;
                flag = 1;
                
            }
            j--;
        }

    }
}



int main(){
    int n, i;
    Card c1[36];
    char input[100];

    scanf("%d", &n);

    int cnt = 0;
    for(i = 0; i < n; i++){
        scanf("%s", input);
        
        c1[i].suit = input[0];
        c1[i].value = input[1];
    }
    
    return 0;
}

