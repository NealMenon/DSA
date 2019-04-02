#include <stdio.h>
#include <math.h>

int main() {
    
    int n, k, v = 1; 
    double sum = 0.0;
    
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter k: ");
    scanf("%d", &k);
    
    while(v < n){
        sum = 0;
        //printf("v is now %d\n", v);
        for(int p = 0; (int)(v/(pow(k, p))) != 0; p++){
            sum += (1.0*v)/(pow(k, p));
            //printf("p = %d, sum = %f\n", p, sum);
        }
        printf("\n");
        if(sum >= n){
            //printf("sum is %f v is %d\n", sum, v);
            printf("v is %d\n", v);
            return 0;
        }
            
        v++;
    }
        
    return 0;
}