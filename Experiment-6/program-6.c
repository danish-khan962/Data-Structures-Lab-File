//Program to delete duplicate elements from list
#include <stdio.h>
int removeDuplicates(int arr[], int n) {
    int newArr[n], newSize = 0;
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == newArr[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            newArr[newSize] = arr[i];
            newSize++;
        }
    }

    for (int i = 0; i < newSize; i++) {
        arr[i] = newArr[i];
    }

    return newSize;
}
int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    size = removeDuplicates(arr, size);
    printf("Array after removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
