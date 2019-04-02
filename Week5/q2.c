#include <stdio.h>

int main() {
    
    int n, m, nar[100], sas[100];
    printf("Naruto length: ");
    scanf("%d", &n);
    printf("Sasuke length: ");
    scanf("%d", &m);
    
    printf("Enter Naruto's array:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &nar[i]);

   
    printf("Enter Sasuke's array:\n");
    for(int i = 0; i < m; i++)
        scanf("%d", &sas[i]);
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(sas[i] == nar[j]) {
                printf("%d ", nar[j]);
                nar[j] = -1;
            }
        }
    }
    
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            if(nar[j-1] > nar[j]) {
                int t = nar[j];
                nar[j] = nar[j-1];
                nar[j-1] = t;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        if(nar[i] != -1)
            printf("%d ", nar[i]);
    }
    printf("\n");
    
    
    
    return 0;
}

/*

11 4 
2 1 2 5 7 1 9 3 6 8 8 
2 1 8 3


10 5 
3 1 4 6 2 1 8 5 3 6
6 1 7 9 8

*/