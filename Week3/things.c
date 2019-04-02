
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
//int k, list[25], new[25], len = 0, ch;

void printList() {

   struct node *ptr = head;
   while(ptr != NULL) {        
      printf("%d => ",ptr->data);
      ptr = ptr->next;
   }

   printf("NULL\n");
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
    
    int k, list[25], new[25], len = 0, ch;
    printf("Enter k: ");
    scanf("%d", &k);
    for(int i = 0; i < 25; i++) list[i] = 6969;
    //fflush(stdin);
    getchar();
    for(int i = 0; i < 25; i++){
        char x = (char)0;
        scanf("%c", &x);
        /*if(x != 10) {
            if(x == ' ') {
                i--;
                continue;
            }
            list[len++] = (int)x;
        } else {
            break;
        }*/
        if(x == 10){
            break;
        } else if(x == ' '){
            i--;
            continue;
        } else {
            list[len++] = (int) x;
        }
        
    }
    printf("length is %d", len);
    printf("list is ");
    for(int i = 0; i < len; i++) printf("%d ", list[i]);
    printf("\n");
    
    
    
    
    
    return 0;
}
