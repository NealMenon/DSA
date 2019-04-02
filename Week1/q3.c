
#include<stdio.h>
#include<math.h>

int isPrime(int n) {
    for(int i = 2; i < sqrt(n); i++) 
        if(n % i == 0)
            return 0;
    return 1;
}


int main() {
	
    
    int n;
    printf("Enter side length: ");
    scanf("%d", &n);
    int arr[15][15];
    int num = n*n;
    
    int rlow = 0, clow = 0;
    int rhi = n-1, chi = n-1;
    
    int prim[100];
    prim[0] = 2;
    for(int i = 3, j = 1; j <= n*n; i+=2) {
        if(isPrime(i))
            prim[j++] = i;
    }
    
    if(n%2 == 0) {
        num--;
    }
    
    
    while(num >= 1) {
        for(int i = chi; i >= clow; i--) 
            arr[rhi][i] = prim[--num];
        rhi--;
        
        for(int i = rhi; i >= rlow; i--) 
            arr[i][clow] = prim[--num];
        clow++;
        
        for(int i = clow; i <= chi; i++) 
            arr[rlow][i] = prim[--num];
        rlow++;
        
        for(int i = rlow; i <= rhi; i++) 
            arr[i][chi] = prim[--num];
        chi--;
    }
    7 5
    2 3
    
   
    
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < n ; j++) {
			printf("%d\t",arr[i][j]);		
		}
		printf("\n");
	}
}
