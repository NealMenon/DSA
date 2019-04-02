#include <stdio.h>

int head, n;
int binarySearch(int arr[], int low, int high, int k) { 
    if (high >= low) { 
        int mid = low + (high - low) / 2; 
        if (arr[mid] == k) 
            return mid; 

        if (arr[mid] > k) 
            return binarySearch(arr, low, mid - 1, k); 

        return binarySearch(arr, mid + 1, high, k); 
    } 
    return -1; 
}

int main() {
    
    int k, arr[10000];
   
    printf("Enter length: ");
    scanf("%d", &n);
    
    printf("Enter the circularly sorted array: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(i > 1)
            if(arr[i-1] > arr[i])
                head = i;
    }
    printf("Enter k: ");
    scanf("%d", &k);
    
    //printf("HEad at %d\n", head+1);
    
    int loc = binarySearch(arr, h, n-1, k);
    printf("Found at %d\n", loc);
    
    
    
    
    return 0;
}