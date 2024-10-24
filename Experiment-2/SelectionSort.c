//Selection sort
#include<stdio.h>
void SelectionSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        int minIndex = i;
        for(int j=i+1; j<size;j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}
int main(){
    int arr[7] = {9,5,15,7,1,22,3};
    int size = 7;
    printf("Unsorted array :-> ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }pritn("\n");
    SelectionSort(arr,size);
    printf("Sorted array by selection sort :-> ");
    for(int i=0 ; i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}