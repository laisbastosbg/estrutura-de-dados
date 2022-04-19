#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  char value;
  struct Node *next;
} Node;

void add(Node **head, char value) {
  Node *tmp = *head;
  Node *node = (Node *) malloc(sizeof(Node));
  node->value = value;
  node->next = NULL;
  
  while(tmp->next != NULL) {
    tmp = tmp->next;
  }

  tmp->next = node;
}

void list(Node *head) {
  Node *tmp = head;
  
  while(tmp->next) {
    tmp = tmp->next;
    printf("%c", tmp->value);
  }
}

// void validate(Node *head) {
  
// }

int main() {
  Node *head = (Node *) malloc(sizeof(Node));
  head->next = NULL;

  char entrada;

    entrada = getc(stdin);
  while(entrada != '0') {
    add(&head, entrada);
    entrada = getc(stdin);
  }

  list(head);

  // char expressao[] = "((2 + 3 ) * (5 + 2) ) * ((3 + 8 - 2 )  * (2 + 3)  * (3 + 4) )";
  
  // printf("%s\n", expressao);
  return 0;
}