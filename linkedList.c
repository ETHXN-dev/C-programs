#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int number;
  struct node *next;
} node;

void insert(node **, int value);
void print(node *);

int main() {
  node *list = NULL;

  insert(&list, 4);
  insert(&list, 5);
  insert(&list, 6);

  print(list);

  return 0;
}

void insert(node **head, int value) {
  node *n = malloc(sizeof(node));
  if (n == NULL) {
    return;
  }
  n->number = value;
  n->next = *head;

  *head = n;
};

void print(node *head) {
  node *ptr = head;
  while (ptr != NULL) {
    printf("%d ", ptr->number);
    ptr = ptr->next;
  }
}
