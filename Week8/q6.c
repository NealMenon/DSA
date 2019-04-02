#include<stdio.h>
int stack[1000], tos = 0, min = 20000000;

void push(int data){
    stack[tos++] = data;
    if(data < min)
        min = data;
}

int pop() {
    return stack[--tos];
}

void printStack() {
    for(int i = tos-1; i >= 0; i--)
        printf("%d\n", stack[i]);
}


int main() {
    int ch, data;
    printf("Enter 1 for push\nEnter 2 for pop\nEnter 3 for minimum number\nEnter 4 for exit\nAnything for print stack\n");
    do {
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter data to push: ");
                scanf("%d", &data);
                push(data);
                printf("Item pushed!\n");
                break;
            case 2:
                data = pop();
                if (data == -404)
                    printf("Underflow; stack empty\n");
                else
                    printf("Popped: %d\n", data);
                break;
            case 3:
                printf("Min element is: %d\n", min);
                break;
            default:
                printStack();
        }
    } while(ch != 4);
    return 0;
}
