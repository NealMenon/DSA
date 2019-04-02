#include <stdio.h>

int main() {
    
    
    
    int n, m, a1[50], a2[50];
    printf("Enter length of first array: ");
    scanf("%d", n);
    
    printf("Enter first array: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a1[i]);
    
    printf("Enter length of second array: ");
    scanf("%d", m);
    
    printf("Enter second array: ");
    for(int i = 0; i < m; i++)
        scanf("%d", &a2[i]);
    
    int i = 0, j = 0;
    
    
    
    return 0;
}