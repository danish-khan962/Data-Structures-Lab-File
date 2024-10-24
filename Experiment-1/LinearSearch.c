//Linear Search
#include<stdio.h>
int LinearSearch(int arr[], int size, int key){
    for(int i=0; i<size;i++){
        if(arr[i] == key)
            return 1;
    }
    return 0;
}
int main(){
    int arr[5] = {7,3,2,9,15};
    int size = 5;
    int key;
    printf("Enter element you want to search :-> ");
    scanf("%d",&key);
    int found = LinearSearch(arr,size,key);
    if(found){
        printf("Element condition : PRESENT");
    }
    else{
        printf("Element condition : ABSENT");
    }
    return 0;
}