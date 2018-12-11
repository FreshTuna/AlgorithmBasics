#include <stdio.h>

void PrintArray(int A[],int size);

int main(void){
    int i,j,temp=0;
    int A[]={48,31,13,7,32,65,20,29,11,10};
    
    printf("Bubble Sort\n\n");
    printf("Start Sort!\n");
    printf("Array = ");
    PrintArray(A,10);
    printf("\n\n");
    for(i=9; i>=0; i--){
        for(j=0; j<i+1; j++){
            if(A[j]>A[j+1]){
                temp=A[j+1];
                A[j+1]=A[j];
                A[j]=temp;
                PrintArray(A,10);
            }
        }
    }
    printf("\n\nResult Array = ");
    PrintArray(A,10);
    
    scanf("%d");
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