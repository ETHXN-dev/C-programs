#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int *stack;
  int top, capacity;
} Stack;

void stack_init(Stack *);
void push(Stack *, int);
void pop(Stack *);
void peek(Stack *);

int main() {

  Stack sampleStack;

  stack_init(&sampleStack);

  push(&sampleStack, 1);
  push(&sampleStack, 2);
  push(&sampleStack, 3);
  push(&sampleStack, 4);

  printf("Top: %d\nCapcity: %d\n", sampleStack.top, sampleStack.capacity);

  push(&sampleStack, 4);

  printf("Top: %d\nCapcity: %d\n", sampleStack.top, sampleStack.capacity);

  pop(&sampleStack);
  printf("Top: %d\nCapcity: %d\n", sampleStack.top, sampleStack.capacity);

  peek(&sampleStack);

  free(sampleStack.stack);

  return 0;
}

void stack_init(Stack *nums) {
  nums->top = -1;
  nums->capacity = 4;
  nums->stack = malloc(sizeof(int) * nums->capacity);
  if (nums->stack == NULL) {
    printf("Error in initializing stack");
    return;
  }
}

void push(Stack *nums, int n) {
  if (nums->top == nums->capacity - 1) {
    nums->capacity *= 2;
    int *tmp = realloc(nums->stack, sizeof(int) * nums->capacity);
    if (tmp == NULL) {
      return;
    }
    nums->stack = tmp;
    nums->top++;
    nums->stack[nums->top] = n;
  } else {
    nums->top++;
    nums->stack[nums->top] = n;
  }
}

void pop(Stack *nums) {
  if (nums->top == -1) {
    printf("Error: cannot pop an empty stack");
    return;
  }
  int number = nums->stack[nums->top];
  printf("%d was returned\n", number);
  --nums->top;
}

void peek(Stack *nums) {
  if (nums->top == -1) {
    printf("Error: cannot peek into an empty stack\n");
    return;
  }
  printf("%d is currently at the top\n", nums->stack[nums->top]);
}
