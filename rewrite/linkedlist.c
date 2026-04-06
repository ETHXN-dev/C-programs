#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int n;
  struct node *next;
} node;

void insert(node **, int);
void print(node *);

int main() {

  node *head = NULL;

  insert(&head, 9);
  insert(&head, 9);
  insert(&head, 9);
  insert(&head, 9);
  insert(&head, 6);

  print(head);

  return 0;
}

void insert(node **head, int number) {
  node *new = malloc(sizeof(node));

  if (new == NULL) {
    return;
  }

  new->n = number;
  new->next = *head;

  *head = new;
}

void print(node *head) {
  while (head != NULL) {
    printf("%d ", head->n);
    head = head->next;
  }
}
