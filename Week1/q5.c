#include<stdio.h>
#include<stdlib.h>


struct node { 
  int data; 
  struct node* next; 
}; 

struct node *head;


head = (struct node *)malloc(sizeof(struct node*)); NULL;

void insert(int x) {
    struct node *t, *temp;
    t = (struct node*)malloc(sizeof(struct node));
    if (head == NULL) {
        head = t;
        head->data = x;
        head->next = NULL;
    }
    
    temp = head;
    
    while(temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = t;
    t->data = x;
    t->next = NULL;    
}

void print() {
    struct node *temp;
    temp = head;
    while (temp->next != NULL) {
        
        printf("%d -> ", temp->data);
        temp = temp->next;
        
    }
    printf("NULL\n");
}



int main() {
    
    int fun = 0;
    printf("Enter \n0 for enter new element to end \n1 for print \n2 for search \n3 for delete \n4 for swap \n5 for exit\n");
    scanf("%d", &fun);
    while (fun != 5){
        printf("Enter \n0 for enter new element to end \n1 for print \n2 for search \n3 for delete \n4 for swap \n5 for exit\n");
        scanf("%d", &fun);
        if(fun == 0) {
            //enter
            int n;
            printf("Enter the data: ");
            scanf("%d", &n);
            insert(n);
        } else if(fun == 1) {
            print();
        }
    }
    return 0;
}