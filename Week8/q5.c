#include<stdio.h>
#include<math.h>

void sort(int arr[20], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(arr[j] > arr[j+1]) {
                int t = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = t;
            }
        }
    }
}

int numify2(int ar[10], int n) {
    int num = 0, pw = 0;
    for(int i = n; i >= 0; i--, pw++){
        num += ar[i] * (int)pow(10, pw);
    }
    return num;
}
int numify(int ar[10], int n) {
    int num = 0, pw = n - 1;
    for(int i = 0; i < n; i++, pw--){
        num += ar[i] * (int)pow(10, pw);
    }
    return num;
}



int main() {
    int n, arr[20], a[10], b[10];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array of %d single digit postive numbers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    int ia = 0, ib = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0) {
            a[ia++] = arr[i];
        } else {
            b[ib++] = arr[i];
        }
    }

    int numA = numify(a, ia);
    int numB = numify(b, ib);
    printf("numA: %d\nnumB: %d\n", numA, numB);

    printf("ANSWER: %d\n\n", numA+numB);
    printf("A:\n");
    for(int i = 0; i < ia; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("B:\n");
    for(int i = 0; i < ib; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}
