#include <stdio.h>

int main() {
    
    int n, num, odd = 0;;
    printf("Enter length: ");
    scanf("%d", &n);
    printf("Enter the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        if(i%2 == 0)
            odd += num;
        else 
            odd -= num;
    }
    
    printf("Odd number is: %d\n", odd);
    
    
    return 0;
}