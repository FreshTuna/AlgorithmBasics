#include <stdio.h>

int main(){
    int A[10];//={8,31,48,73,3,65,20,29,11,15};
    int i=0;

    printf("Selection Sort\n");
    printf("Input 10 Numbers to Sort!\n");
    for(i=0; i<10; i++){
        scanf("%d",&A[i]);
    }
    PrintArray(A);
    SelectionSort(A,10);
    PrintArray(A);

    scanf("%d");
    return 0;
}

void SelectionSort(int a[],int index){
    int i,maxIndex,temp=0;
    for(i=9; i>=0; i--){
        maxIndex=LargestIndex(a,i);
        temp=a[i];
        a[i]=a[maxIndex];
        a[maxIndex]=temp;
    }
}

int LargestIndex(int a[], int last){
    int i,maxIndex,max=0;
    for(i=last; i>0; i--){
        if(a[i]>max){
            max=a[i];
            maxIndex=i;
        }
    }
    return maxIndex;
}


void PrintArray(int A[]){
    int Length = 10;
    int i=0;

    printf("[ ");
    for(i=0; i<Length; i++){
        printf("%d ",A[i]);
    }
    printf("]\n");
}

