#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int n, arr[50];
    printf("Enter the number of numbers: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    //printf("Length of %d is %d\n", n, (int)log10(n) + 1);
    
    
    int maxi = 0, len;
    for(int i = 1; i < n; i++) {
         =  ipconfigarr[i]/(pow(10,((int)log10(arr[i]))));
        
    }
    
    return 0;
}