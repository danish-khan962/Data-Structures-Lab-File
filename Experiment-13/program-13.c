//Program to implement doubly linked list with operations
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* head = NULL;
void insert(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    newNode->prev = NULL;
    if (head != NULL) head->prev = newNode;
    head = newNode;
}
void delete(int value) {
    struct Node* temp = head;
    while (temp != NULL && temp->data != value) temp = temp->next;
    if (temp == NULL) return;
    if (temp->prev != NULL) temp->prev->next = temp->next;
    else head = temp->next;
    if (temp->next != NULL) temp->next->prev = temp->prev;
    free(temp);
}
void display() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    insert(10);
    insert(20);
    insert(30);
    printf("Doubly Linked List: ");
    display();
    delete(20);
    printf("After Deletion: ");
    display();
    return 0;
}
