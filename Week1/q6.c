#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    for (int i = sqrt(n); i >= 2; i--){
        if (n % i == 0) 
            return 0;
    }
    return 1;
}

int main(){
    int a, b;
    printf("Enter a:  ");
    scanf("%d", &a);
    printf("Enter b:  ");
    scanf("%d", &b);
    
    if(a==1)a++;
    
    for(int i = a; i <= b; i++) {
        if(isPrime(i))
            printf("%d ", i);
    }
    
    printf("\n");
    return 0;
}