#include <stdio.h>

int main() {
    
    int n, arr[100], loops = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    for(int i = 1, chg = 0; i < n && chg == 0; i++, chg = 0, loops++){
        for(int j = 1; j < n; j++){
            if(arr[j-1] > arr[j]) {
                chg = 1;
                int t = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = t;
            }
        }
    }
    loops--;
    printf("Sorted array: \n" );
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nLoops: %d\n", loops);
    
    return 0;
}