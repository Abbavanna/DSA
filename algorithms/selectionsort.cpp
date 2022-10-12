/*selection sort algorithm */

#include<iostream>

using namespace std;

void swap(int *x, int *y){

    int ref = *x;
    *x = *y;
    *y = ref;
}

void selectionsort(int Arr[], int n){

    int min_id;
    int i,j;
    for ( i = 0; i < n-1; i++)   // 0<4   (i goes from 0,1,2,3) because it has to compare with the two items in array, if it goes to 4th then what is the 5th element?? done !
    {
        min_id = i;             
        for ( j = i+1; j < n; j++)   // j = i+ 1 means, if i is 2 then the j index should be the next one and minid is j !! done !
        {
            if (Arr[j]<Arr[min_id])
            {
                min_id = j;
            }
            
        }
        swap(&Arr[min_id],&Arr[i]);
    }
    

}

int main(){

    int A[] = {5,2,4,6,5};
    int n = sizeof(A)/sizeof(A[0]);

    selectionsort(A,n);

    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<endl;
    }
    


}