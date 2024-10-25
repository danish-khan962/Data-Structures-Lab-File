//Program to find minimun and maximum elements in linked list
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void MinMax(struct Node* head, int *min, int *max) {
    *min = head->data;
    *max = head->data;
    while (head != NULL) {
        if (head->data < *min) *min = head->data;
        if (head->data > *max) *max = head->data;
        head = head->next;
    }
}
int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    head->data = 3;
    head->next = second;
    second->data = 1;
    second->next = third;
    third->data = 7;
    third->next = NULL;
    int min, max;
    MinMax(head, &min, &max);
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
    free(head);
    free(second);
    free(third);
    return 0;
}
