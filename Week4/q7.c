#include <stdio.h>

int binarySearch(int arr[], int low, int high, int k) { 
    if (high >= low) { 
        int mid = low + (high - low) / 2; 
        if (arr[mid] == k) 
            return mid; 

        if (arr[mid] > k) 
            return binarySearch(arr, low, mid - 1, k); 
        //last case
        return binarySearch(arr, mid + 1, high, k); 
    } 
    return -1; 
}

int main() {
    
    int n, arr[100], hold, k, s1 = -1, s2 = -1;
    printf("Enter length: ");
    scanf("%d", &n);
    printf("Enter the (almost) sorted array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(i > 0 && s1 == -1){
            if(arr[i-1] > arr[i]) {
                s1 = i-1;
                s2 = i;
                hold = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = hold;
            }
        }
    }
    printf("Enter find: ");
    scanf("%d", &k);
    
    if(k == arr[s1]){
        printf("Found at %d\n", s1+2);
        return 0;
    }
    if(k == arr[s2]){
        printf("Found at %d\n", s2);
        return 0;
    }
    
    int loc = binarySearch(arr, 0, n-1, k);
    if(loc != -1)
        printf("Found at %d\n", loc+1);
    else
        printf("ERROR: %d Not found\n", k);
    return 0;
}