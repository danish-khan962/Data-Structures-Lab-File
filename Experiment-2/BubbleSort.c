//Bubble Sort
#include<stdio.h>
#include<stdbool.h>
void BubbleSort(int arr[], int size){
    for(int i=0; i<size-1;i++){
        bool swapped = false;
        for(int j=0;j<size-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
                swapped = true;
            }
        }
        if(swapped==false)
            break;
    }
}
int main(){
    int arr[6] = {5,7,2,90,6,4};
    int size = 6;
    printf("Unsorted Array :-> ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }printf("\n");
    BubbleSort(arr,size);
    printf("Sorted array by Bubble Sort :-> ");
    for(int i=0; i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}