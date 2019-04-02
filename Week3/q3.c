#include <stdio.h>

int main() {
    
    
    int len = 0, arr[25], k, new[25];
    printf("Enter k: ");
    scanf("%d ", &k);
    /*printf("Enter len: ");
    scanf("%d", &len);*/
    //fflush(stdin);
    char ch = 'y';
    //printf("Enter number: ");
    do {
        printf("Enter number? y for yes, n for no: ");
        scanf("%c ", &ch);
        ch = getchar();
        if (ch == 'y') {
            printf("Enter:  ");
            scanf(" %d ", &arr[len++]);
        } else
            break;
    } while(1);
    /*for(int i = 0; i < len; i++) 
        scanf("%d", &arr[i]);*/
    
    
    
    
    
    
    
    
    
    
    int i;
    for(i = 1; k*i <= len; i++){
        new[i-1] = arr[k*i-1];
        arr[k*i-1] = 567;
    }
    i--;
    for(int j = len-1; j >=0; j--) {
        if(arr[j] != 567){
            new[i++] = arr[j];
        } else
            continue;
    }
    
    /*printf("Arr: ");
    for(int i = 0; i < len; i++)
        printf("%d ", arr[i]);*/
    
    printf("\nNew: ");
    for(int i = 0; i < len; i++)
        printf("%d ", new[i]);
    printf("\n");
    return 0;
}