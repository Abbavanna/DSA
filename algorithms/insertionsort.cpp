#include<iostream>
using namespace std;

void swap(int *x, int *y){


    int ref = *x;
    *x = *y;
    *y = ref;
}

void insertionsort(int Arr[], int n){

    int i,j;
    int nw;
    int nArr[n];

    for ( i = 0; i < n; i++)
    {
        
        
    }
    


}

int main(){

    int A[] = {5,4,2,3,1};
    int n = sizeof(A)/sizeof(A[0]);

    insertionsort(A,n);
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<endl;
    }
    
    return 0;
}