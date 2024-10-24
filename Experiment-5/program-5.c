//Program to delete element at specific position in array :
#include<stdio.h>
void deleteElement(int arr[], int *n, int pos){
    for(int i=pos-1;i< *n;i++){
        arr[i] = arr[i+1];
    }(*n)++;
}
int main(){
    int arr[100] = {10,20,30,40,50};
    int n=5; int pos;
    printf("Initial array :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Enter the position to delete the element : ");
    scanf("%d",&pos);
    if(pos<1 || pos>n){
        printf("Invalid position ! \n");
    }else{
        deleteElement(arr,&n,pos);
        printf("Array after deletion : ");
        for(int i=0; i<n;i++){
            printf("%d ",arr[i]);
        }printf("\n");
    }
    return 0;
}