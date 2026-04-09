#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int number;
  struct node *next;
} node;

void insert(node **, int value);
void print(node *);
void delete(node **, int);

int main() {
  node *list = NULL;

  insert(&list, 4);
  insert(&list, 5);
  insert(&list, 6);
  insert(&list, 3);
  insert(&list, 2);

  delete(&list, 6);
  delete(&list, 2);
  delete(&list, 4);

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

void delete(node **head, int target) {

  node *current = *head;
  node *previous = NULL;

  while (current != NULL) {
    if ((current)->number == target) {
      if (previous == NULL) {
        *head = (*head)->next;
        free(current);
        return;
      } else {
        previous->next = current->next;
        free(current);
        return;
      }
    }
    previous = current;
    current = current->next;
  }
  printf("Error: %d not found\n", target);
}
