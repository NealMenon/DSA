#include<stdio.h> 
#include<stdlib.h> 

struct node { 
    int data; 
    struct node *next; 
}; 


void append(struct node** head_ref, int new_data) { 
    struct node *new_node = (struct node*) malloc(sizeof(struct node)); 
    struct node *last = *head_ref;  /* used in step 5*/
  
    new_node->data  = new_data; 
    new_node->next = NULL; 
  
    if (*head_ref == NULL) { 
       *head_ref = new_node; 
       return; 
    } 
  
    while (last->next != NULL) 
        last = last->next; 
  
    last->next = new_node; 
    return; 
} 

void print(struct node *h) {
    while(h != NULL) { 
        printf("%d -> ", h->data);
        h = h->next;
    }
    printf("NULL\n");
}

int find(struct node** head, int x) {
    struct node* temp = *head;
    for(int i = 1; temp->next != NULL; i++, temp = temp->next)
        if (temp->data == x)
            return i;
    return -1;
}



int main() { 
    struct node* head = NULL; 
    int fun = 0;
    printf("Enter \n1 for enter new element to end \n2 for print \n3 for search \n4 for delete \n5 for swap \nAny for exit\n");
    scanf("%d", &fun);
    while(fun != 6) {
        if(fun == 1){
            int n; 
            printf("Enter n: ");
            scanf(" %d", &n);
            append(&head, n);
        } else if(fun == 2){
            print(head);
        } else if (fun == 3){
            printf("Enter number to be found: ");
            int x;
            scanf(" %d", &x);
            int l = find(&head, x);
            if(l == -1) {
                printf("Not found\n");
            } else {
                printf("Found in %dth node.\n", l);
            }
        } else if (fun == 4){
            
        } else if (fun == 5){
            
        } else {
            printf("Final linked list: \n");
            print(head);
            return 0;
        }
        

        printf("Enter function choice: ");
        scanf("%d", &fun);
    }
    
    /*
    append(&head, 5);
    append(&head, 15);
    append(&head, 25);
    print(head);
    */
    return 0; 
} 

