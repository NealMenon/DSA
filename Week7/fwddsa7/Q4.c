#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
    // return max(*(int *)b - *(int *)a);
}

int main()
{
    int n, m, s1 = 0, s2 = 0;
    printf("Enter number of stacks and height of exhibit: ");
    scanf("%d %d", &n, &m);
    int arr[n];
    printf("Enter array\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        s1 += arr[i];
    }
    qsort(arr, n, sizeof(int), compare);
    for (int i = 0; i < n; ++i) {
        if (!arr[i])
            break;

        if (arr[i] == 1)
            s2++;
        else if (i == n - 1)
            s2 += arr[i];
        else if (arr[i] == arr[i + 1]) {
            s2++;
            for (int j = i + 1; arr[i] == arr[j]; j++)
                arr[j]--;
            // continue;
        } else
            s2 += (arr[i] - arr[i + 1]);
    }
    printf("Max blocks = %d\n", s1 - s2);
}
