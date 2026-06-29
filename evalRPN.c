#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int evalRPN(char **tokens, int tokensSize);

int main(void) {

    char *tokens[] = {"10", "6", "9",  "3", "+", "-11", "*",
                      "/",  "*", "17", "+", "5", "+"};
    int size = sizeof(tokens) / sizeof(tokens[0]);

    printf("%d", evalRPN(tokens, size));

    return 0;
}

int evalRPN(char **tokens, int tokensSize) {
    int *stack = malloc(sizeof(int) * tokensSize);
    int top = -1;

    for (int i = 0; i < tokensSize; i++) {
        char *tok = tokens[i];
        // strchr("+-*/", tok[0] or !isdigit(tok[0])
        if (tok[1] == '\0' && !isdigit(tok[0])) {
            int b = stack[top--];
            int a = stack[top--];

            switch (tokens[i][0]) {
                case '+': stack[++top] = a + b; break;
                case '-': stack[++top] = a - b; break;
                case '*': stack[++top] = a * b; break;
                case '/': stack[++top] = a / b; break;
            }
        } else
            stack[++top] = atoi(tok);
    }

    int result = stack[top];
    free(stack);

    return result;
}
