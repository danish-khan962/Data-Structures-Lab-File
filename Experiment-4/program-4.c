//Program to insert element at specific position in array.
#include<stdio.h>
void insertElement(int arr[], int*n, int value,int pos){
    for(int i= *n; i>=pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1] = value;
    (*n)++;
}
int main(){
    int arr[100] = {1,2,3,4,5};
    int n = 5;
    int pos, value;
    printf("Initial array :\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }printf("\n");
    printf("Enter the position to insert new element : ");
    scanf("%d",&pos);
    printf("Enter the value to insert : ");
    scanf("%d",&value);
    if(pos<1 || pos>n+1){
        printf("Invalid position ! \n");
    }else{
        insertElement(arr,&n,value,pos);
        printf("Array after insertion : ");
        for(int i = 0; i<n; i++){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}