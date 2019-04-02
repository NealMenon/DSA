#include <stdio.h>
/*
int q[100];
int len = 0;
void push(int n) {
    q[len++] = n;
}
int pop() {
    int r = q[0];
    for(int i = 1; i < len; i++) {
        q[i] = q[i+1];
    }
    len--;
    return r;
}
int isEmpty() {
    return len ? 1 : 0;
}

void print() {
    for (int i = 0; i < len; i++) 
        printf("%d -> ", q[i]);
    printf("END\n");
}

int main() {
    
    push(5);
    push(15);
    push(25);
    print();
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    
}
*/


int q[1000];
int front = 0, len = 0;
int isEmpty() {
    return (len) ? 1 : 0;
}
int pop(){
    if(!isEmpty()){
        return q[front++];
    } else 
        return 911;
}

void push(int x){
    q[front+len] = x;
}
void print(){
    for(int i = front; i <= len+front; i++)
        printf("%d -> ", q[i]);
    printf("END\n");
}



int main() {
    
    
    push(7);
    push(72);
    push(123);
    push(31);
    print();
    
}