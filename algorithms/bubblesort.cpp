/* BUBBLE SORT ALGORITHM */

#include<iostream>
#include<chrono>

using namespace std;



void swap(int *x, int *y){

    int ref = *x;
    *x = *y;
    *y = ref;

}
int main(){


    int A[] = {5,1,3,2,4};  // if is used only for checking not iterating
   int flag;

    
    for (int i = 0; i < sizeof(A)/sizeof(A[0]); i++)
    {
        flag = 0;  // lets say no event of swap occured

        cout<<"Pass "<<i+1<<endl;
        for (int j = 0; j< (sizeof(A)/sizeof(A[0])-i-1); j++)
        {
            if (A[j]>A[j+1])
        {
            swap(&A[j],&A[j+1]); 
            flag = 1;
        }
         
            
        }
        
        if(flag == 0)
        break;
        
    }
    
    for(int i=0; i<sizeof(A)/sizeof(A[0]); i++){ cout<<A[i];}
    
    
   
}