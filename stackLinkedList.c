#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int number;
    struct Node *next;
} Node;

typedef struct Stack {
    Node *TOP;
} Stack;

void push(Stack *stack, int num);
bool pop(Stack *stack, int *placeholder);
bool peek(Stack *stack, int *placeholder);
void free_stack(Stack *stack);

int main(void) {

    Stack sample_stack = {NULL};

    int sample_number;

    push(&sample_stack, 7);
    printf("\n%d\n", sample_stack.TOP->number);

    push(&sample_stack, 8);
    printf("\n%d\n", sample_stack.TOP->number);

    push(&sample_stack, 6);
    printf("\n%d\n", sample_stack.TOP->number);

    if (pop(&sample_stack, &sample_number))
        printf("\n%d got popped!\n", sample_number);

    if (pop(&sample_stack, &sample_number))
        printf("\n%d got popped!\n", sample_number);

    if (peek(&sample_stack, &sample_number))
        printf("\n%d is currently at the top\n", sample_number);

    free_stack(&sample_stack);

    return 0;
}

void push(Stack *stack, int num) {
    Node *node = malloc(sizeof(Node));

    if (node == NULL) {
        fprintf(stderr, "error: memory allocation failed\n");
        return;
    }

    node->number = num;
    node->next = stack->TOP;

    stack->TOP = node;

    return;
}

bool pop(Stack *stack, int *placeholder) {
    if (stack->TOP == NULL) {
        printf("\nCannot pop an empty stack!\n");
        return false;
    }

    Node *head = stack->TOP;
    *placeholder = head->number;

    stack->TOP = head->next;

    free(head);

    return true;
}

bool peek(Stack *stack, int *placeholder) {
    if (stack->TOP == NULL) {
        printf("\nCannot peep an empty stack!\n");
        return false;
    }

    *placeholder = stack->TOP->number;

    return true;
}

void free_stack(Stack *stack) {
    while (stack->TOP != NULL) {
        Node *head = stack->TOP;
        stack->TOP = head->next;
        free(head);
    }
}
