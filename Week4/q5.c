#include <stdio.h>

int main() {
    
    int n, m, arr[100];
    double done = 0.0;
    
    printf("Enter number of machine: ");
    scanf("%d", &n);
    printf("Enter number of products: ");
    scanf("%d", &m);
    
    printf("Enter time taken by each machine: ");
    for(int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    
    done = 0.0;
    for(int time = 1; time < 100; time++) {
        for(int i = 0; i < n; i++)
            done = done + (1.0/arr[i]);
        if(done >= m){
            printf("Time taken was %d\n", time);
            return 0;
        }
    }
    
    
    return 0;
}