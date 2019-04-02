
#include<stdio.h>
#include<math.h>
int main() {
	
    
    int n;
    printf("Enter side length: ");
    scanf("%d", &n);
    int arr[15][15];
    int num = n*n;
    
    int rlow = 0, clow = 0;
    int rhi = n-1, chi = n-1;
    
    /*if(n%2 == 0) {
        num--;
    }*/
    
    while(num >= 1) {
        for(int i = chi; i >= clow; i--) 
            arr[rhi][i] = num--;
        rhi--;
        
        for(int i = rhi; i >= rlow; i--) 
            arr[i][clow] = num--;
        clow++;
        
        for(int i = clow; i <= chi; i++) 
            arr[rlow][i] = num--;
        rlow++;
        
        for(int i = rlow; i <= rhi; i++) 
            arr[i][chi] = num--;
        chi--;
    }
    
   
    
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < n ; j++) {
			printf("%d\t",arr[i][j]);		
		}
		printf("\n");
	}
}
