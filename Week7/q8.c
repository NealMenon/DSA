#include <stdio.h>
#include <stdlib.h>


int adj(int n){
    int ones, tens;
    for(int i = n; i > 10; i = i/10){
        ones = i%10;
        tens = ((i % 100) - ones)/10;
        if(abs(tens - ones) != 1)
            return 0;
    }
    return 1;
}

int main() {
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        if(adj(i))
            printf("%d ", i);
    }
    
    printf("\n");
    return 0;
}