//Write a program to insert element at last position in array : 
#include<stdio.h>
#include<stdlib.h>
#define max 23
int main(){
    int arr[max], j, n;
    printf("\nEnter limit :-> ");
    scanf("%d ",&j);
    if(j>=max){
        printf("\nSize of limit does not match...");
        exit(0);
    }
    printf("\nEnter new element :-> ");
    scanf("%d",&n);
    arr[j] = n;
    printf("\nElements are :-> ");
    for(int i = 0; i<j ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}