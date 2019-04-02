#include<stdio.h>

char st[20], ch;
int times, a, b, k, len;

void rotate(int a, int b, int k) {
    char temp[40];
    for(int i = 0, k = 1; i <= b-a; i++, k*=2){
        temp[k] = temp[k-1] = st[a+i-1]; 
        printf("char at %d is %c\n", a+i, st[a+i-1]);
    } 
    printf("temp is %s\n", temp);
}


int main() {

    
    
    
    printf("Enter the string: ");
    while(ch != '\n') {
        scanf("%c", &ch);
        if(ch == '\n')
            break;
        else 
            st[len++] = ch;
    }
    printf("Enter the number of operations: ");
    scanf("%d", &times);
    for(int i = 0; i < times; i++) {
        printf("Enter start index, end index, times: ");
        scanf("%d %d %d", &a, &b, &k);
        rotate(a, b, k);
    }
    
    printf("Word is now:  %s\n", st);
    
    
    return 0;
}