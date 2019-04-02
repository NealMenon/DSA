#include <stdio.h>

void printfArr(int arr[10000], int len){
    printf("Len is %d\n", len);
    for(int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n, arr[10000], in;

    printf("Enter lenght n: ");
    scanf("%d", &n);
    printf("Enter array\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &in);
        int j;
        for(j = i; j > 0; j--){
            if (arr[j] > in) {
                arr[j+1] = arr[j];
            }
        }
        arr[j] = in;
        printfArr(arr, i);
    }



    return 0;
}
