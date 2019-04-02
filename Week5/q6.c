#include <stdio.h>

int main() {
    
    int n, arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int pairs = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] > arr[j])
                pairs++;
        }
    }
    
    
    printf("Unordered Pairs: %d\n", pairs);
    
    return 0;
}