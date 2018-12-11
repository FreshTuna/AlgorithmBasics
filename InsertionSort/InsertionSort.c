#include <stdio.h>
#include <stdlib.h>

void PrintArray(int A[],int size);

int main(void){
    int i,j,temp=0,loc=0,newItem;
    int A[]={48,31,13,7,32,65,20,29,11,10};

    printf("Bubble Sort\n\n");
    printf("Start Sort!\n");
    printf("Array = ");
    PrintArray(A,10);
    for(i=1; i<10; i++){
        loc=i-1;
        newItem=A[i];
        while(loc>=0 && A[loc]>newItem){
            A[loc+1]=A[loc];
            loc--;
        }
        A[loc+1]=newItem;
        PrintArray(A,10);
    }
    printf("\n\nResult Array = ");
    PrintArray(A,10);

    system("pause");

    return 0; 
}

void PrintArray(int A[],int size){
    int i=0;

    printf("[ ");
    for(i=0; i<size; i++){
        printf("%d ",A[i]);
    }
    printf("]\n");
}