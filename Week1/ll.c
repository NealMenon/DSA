#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *head = NULL;

//display the list
void printList() {

   struct node *ptr = head;
   while(ptr != NULL) {        
      printf("%d => ",ptr->data);
      ptr = ptr->next;
   }

   printf("NULL\n");
}

//insert link at the first location
void prepend(int data) {
   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->data = data;
   link->next = head;
   head = link;
}

void append(int n) {
    struct node *link = (struct node*) malloc(sizeof(struct node));
    link->data = n;
    link->next = NULL;
    if(head == NULL){
        head = link;
    } else {
        struct node *trav; //= (struct node*) malloc(sizeof(struct node));
        trav = head;
        while(trav->next != NULL)
            trav = trav->next;
        trav->next = link;
        
    }
}

int main() {
   append(10);
   append(20);
   append(30);
   append(1);
   append(40);
   append(56); 

   printList();
   return 0;
}