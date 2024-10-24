//Insertion Sort
#include<stdio.h>
void InsertionSort(int arr[], int size){
    for(int i=0; i<size; i++){
        int temp = arr[i];
        int j= i-1;
        while(j>=0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
int main(){
    int arr[5] = {2,7,5,1,3};
    int size = 5;
    printf("Unsorted Array :-> ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }print("\n");
    InsertionSort(arr,size);
    printf("Sorted Array by insertion sort :-> ");
    for(int i=0; i<size;i++){
        pritnf("%d ",arr[i]);
    }
    return 0;
}