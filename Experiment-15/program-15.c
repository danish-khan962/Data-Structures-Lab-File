//Program to reverse string using stack
#include <stdio.h>
#include <string.h>
#define MAX 100
char stack[MAX];
int top = -1;
void push(char c) {
    if (top < MAX - 1) stack[++top] = c;
}
char pop() {
    if (top == -1) return '\0';
    return stack[top--];
}
void reverse(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) push(str[i]);
    for (int i = 0; i < len; i++) str[i] = pop();
}
int main() {
    char str[MAX];
    printf("Enter a string: ");
    scanf("%s", str);
    reverse(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
