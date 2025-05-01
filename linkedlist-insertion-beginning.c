#include <stdio.h>
#include <stdlib.h>

struct Node{
int data;
struct Node *next;
};

void linkedListTraversal(struct Node *ptr){
  while(ptr != NULL){
    printf("Element: %d\n", ptr->data);
    ptr = ptr -> next;
  }
}

struct Node * insertAtFirst(struct Node *head, int data){
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr -> next = head;
  ptr -> data = data;

  return ptr;
}



int main(){
  struct Node *head;
  struct Node *second;
  struct Node *third;

  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));

  head -> data = 7;
  head -> next = second;

  second -> data = 14;
  second -> next = third;

  third -> data = 21;
  third -> next = NULL;

  int data;
  printf("Enter data to insert at first node: ");
  scanf("%d", &data);

  printf("Linked list before insertion\n");
  linkedListTraversal(head);

  printf("\nLinked list after insertion\n");
  head = insertAtFirst(head, data);
  linkedListTraversal(head);
  return 0;
}
