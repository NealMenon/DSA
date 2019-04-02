#include <stdio.h>

int mid;
int binarySearch(int arr[], int low, int high, int k) { 
    if (high >= low) { 
        mid = low + (high - low) / 2; 
        if (arr[mid] == k) 
            return mid; 

        if (arr[mid] > k) 
            return binarySearch(arr, low, mid - 1, k); 

        return binarySearch(arr, mid + 1, high, k); 
    } 
    return -2; 
}

int main() {
    
    int n, k, arr[10000];
   
    printf("Enter length: ");
    scanf("%d", &n);
    
    printf("Enter the sorted array: \n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter k: ");
    scanf("%d", &k);
    
    int loc = binarySearch(arr, 0, n-1, k);
    if(loc == -2) {
        printf("Sasuke %d\n", mid+2);
    } else {
        printf("Naruto %d\n", loc+1);
    }
    
    return 0;
}