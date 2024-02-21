#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100
char stack[MAX];
int top = -1; 

void push(int x) {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
        exit(1);
    } else {
        stack[++top] = x;
    }
}

int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        exit(1);
    } else {
        return stack[top--];
    }
}

int evaluate(char x, int op1, int op2) {
    switch (x) {
        case '+': return op1 + op2;
        case '-': return op1 - op2;
        case '*': return op1 * op2;
        case '/': 
            if (op2 == 0) {
                printf("Division by zero error\n");
                exit(1);
            }
            return op1 / op2;
    }
    return 0; 
}

int evaluate_postfix(char postfix[]) {
    int i = 0;
    char x; 
    int op1, op2;

    while (postfix[i] != '\0') {
        if (isdigit(postfix[i])) {
            push(postfix[i] - '0');
        } else {
            op2 = pop();
            op1 = pop();
            push(evaluate(postfix[i], op1, op2));
        }
        i++;
    }

    return pop();
}

int main() {
    char postfix[MAX];
    int result;
    printf("Enter the postfix expression: ");
    scanf("%s", postfix);
    result = evaluate_postfix(postfix);
    printf("The result is: %d\n", result);
    return 0;
}

