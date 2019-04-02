#include <stdio.h> 


int n, mat[10][10], max = -9999;



int main() {

    printf("Enter side size n of matrix: ");
    scanf("%d", &n);
    
    printf("Enter the matrix of size %d jelow: \n", n);
    
    
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nEnterred, n = %d\n", n);
    for(int i = 1; i <= n; i++) {
        for (int j=0; j<n-i+1; j++) { 
            for (int k=0; k<n-i+1; k++) { 
                int sum = 0; 
                for (int p=j; p<i+j; p++) 
                    for (int q=k; q<i+k; q++) 
                        sum += mat[p][q]; 
                max = (max > sum)? max : sum;
            } 
        }     
    }
    printf("Max sum = %d\n", max);

    
    return 0;
}
