//Program to infix to postfix(reverse polish)conversion using stack
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100
char stack[MAX];
int top = -1;
void push(char x) {
    if (top < MAX - 1)
        stack[++top] = x;
}
char pop() {
    if (top != -1)
        return stack[top--];
    return -1;
}
int precedence(char x) {
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    if (x == '^') return 3;
    return 0;
}
void infixToPostfix(char* expression) {
    int i = 0, j = 0;
    char postfix[MAX];
    
    while (expression[i] != '\0') {
        if (isalnum(expression[i])) {
            postfix[j++] = expression[i];
        } else if (expression[i] == '(') {
            push(expression[i]);
        } else if (expression[i] == ')') {
            while (stack[top] != '(') {
                postfix[j++] = pop();
            }
            pop();
        } else {
            while (top != -1 && precedence(stack[top]) >= precedence(expression[i])) {
                postfix[j++] = pop();
            }
            push(expression[i]);
        }
        i++;
    }
    
    while (top != -1) {
        postfix[j++] = pop();
    }
    
    postfix[j] = '\0';
    printf("Postfix Expression: %s\n", postfix);
}
int main() {
    char expression[MAX];
    printf("Enter an infix expression: ");
    scanf("%s", expression);
    infixToPostfix(expression);
    return 0;
}
