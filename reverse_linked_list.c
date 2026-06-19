#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

void insert(Node **head, int num);
void print_list(Node *head);
void reverse_list(Node **head);
void free_list(Node **head);

int main(void) {

    Node *head = NULL;

    insert(&head, 7);
    insert(&head, 8);
    insert(&head, 9);
    insert(&head, 10);

    print_list(head);
    printf("\n");

    reverse_list(&head);
    print_list(head);
    printf("\n");

    free_list(&head);

    return 0;
}

void insert(Node **head, int num) {
    Node *temp = malloc(sizeof(Node));
    if (!temp)
        return;
    temp->value = num;
    temp->next = *head;

    *head = temp;
}

void print_list(Node *head) {
    while (head != NULL) {
        printf("%d ", head->value);
        head = head->next;
    }
}

void reverse_list(Node **head) {
    Node *assistant = NULL;
    Node *head_helper = *head;

    while (*head != NULL) {
        *head = (*head)->next;

        head_helper->next = assistant;
        assistant = head_helper;
        head_helper = *head;
    }

    *head = assistant;
}

void free_list(Node **head) {
    while (*head != NULL) {
        Node *temp = *head;
        *head = temp->next;
        free(temp);
    }
}
