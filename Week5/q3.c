#include <stdio.h>

int main() {
    
    int n, arr[100], nIns, instr[100][3];
    printf("Enter length: ");
    scanf("%d", &n);
    printf("Enter array:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter number of instructions: ");
    scanf("%d", &nIns);
    printf("ENTER \n1 - INSERT\n2 - DELETE\n3 - SWAP\n4 - SORT\n");
    printf("Enter instructions: \n");
    for(int i = 0; i < nIns; i++){
        scanf("%d %d %d", &instr[i][0], &instr[i][1], &instr[i][2]);
    }
    printf("\n***PRINTING***\n");
    printf("The array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nInstructions: \n");
    for(int i = 0; i < nIns; i++){
        printf("%d %d %d\n", instr[i][0], instr[i][1], instr[i][2]);
    }
    return 0;
}

/*
6
3 5 6 8 10 15 
13
1 1 0
1 7 0
1 18 0
2 5 0
2 10 0
1 2 0
1 4 0
1 9 0
3 4 18
3 1 6
2 1 0
2 7 0
4 0 0
*/