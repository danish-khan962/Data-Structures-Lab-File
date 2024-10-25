//Program to evaluate postfix expression using stack
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 100
int stack[MAX];
int top = -1;
void push(int value) {
    if (top < MAX - 1) {
        stack[++top] = value;
    } else {
        printf("Stack overflow\n");
    }
}
int pop() {
    if (top != -1) {
        return stack[top--];
    } else {
        printf("Stack underflow\n");
        return -1;
    }
}
int evaluatePostfix(char* expression) {
    for (int i = 0; expression[i] != '\0'; i++) {
        if (isdigit(expression[i])) {
            push(expression[i] - '0');  // Convert char to int
        } else {
            int operand2 = pop();
            int operand1 = pop();
            
            switch (expression[i]) {
                case '+': push(operand1 + operand2); break;
                case '-': push(operand1 - operand2); break;
                case '*': push(operand1 * operand2); break;
                case '/': push(operand1 / operand2); break;
            }
        }
    }
    return pop();
}
int main() {
    char expression[MAX];
    printf("Enter a postfix expression: ");
    scanf("%s", expression);

    int result = evaluatePostfix(expression);
    printf("Result: %d\n", result);

    return 0;
}
