//Binary Search
#include<stdio.h>
int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid] == key)
            return mid;
        else if(key > arr[mid])
            start = mid+1;
        else
            end = mid-1;
        mid = start+(end-start)/2;
    }
    return -1;
}
int main(){
    int arr[7] = {5,9,13,21,27,57,90};
    int size = 7;
    int key;
    printf("Enter element you want to search :-> ");
    scanf("%d",&key);
    int index = BinarySearch(arr,size,key);
    printf("Element found at index :-> %d",index);
    return 0;
}