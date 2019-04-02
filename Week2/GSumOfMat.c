#include <stdio.h> 

#define n 5 

void printSumSimple(int mat[][n], int k) { 
    if (k > n) return; 

    for (int i=0; i<n-k+1; i++) { 
        for (int j=0; j<n-k+1; j++) { 
            int sum = 0; 
            for (int p=i; p<k+i; p++) 
                for (int q=j; q<k+j; q++) 
                    sum += mat[p][q]; 
            printf("%d ", sum);
        } 

        printf("\n");
    } 
} 

int main() { 
	int mat[n][n] = {{1, 1, 1, 1, 1}, 
					{2, 2, 2, 2, 2}, 
					{3, 3, 3, 3, 3}, 
					{4, 4, 4, 4, 4}, 
					{5, 5, 5, 5, 5}, 
					}; 
	int k = 3; 
	printSumSimple(mat, k); 
	return 0; 
} 

