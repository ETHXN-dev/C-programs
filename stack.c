#include <stdio.h>

typedef struct {
  int stack[100];
  int top;
} STACK;

void push(STACK *s, int n);
int pop(STACK *s);
int peek(STACK *s);

int main() {

  // STACK s = {{0}, -1};

  /*
   * designated initializer:
   * lets us specify which field by setting the name so we can ignore order
   */
  STACK stack = {.stack = {0}, .top = -1};

  push(&stack, 5);
  push(&stack, 7);
  push(&stack, 4);

  pop(&stack);

  printf("%d", peek(&stack));

  return 0;
}

void push(STACK *s, int n) {
  if (s->top >= 99) {
    return;
  }
  ++s->top;
  s->stack[s->top] = n;
}

int pop(STACK *s) {
  if (s->top == -1) {
    printf("Error: cannot pop an empty stack!");
    return -1;
  }
  int number = s->stack[s->top];
  --s->top;
  return number;
}

int peek(STACK *s) {
  if (s->top == -1) {
    printf("Error : cannot peek an empty stack!");
    return -1;
  }
  return s->stack[s->top];
}
