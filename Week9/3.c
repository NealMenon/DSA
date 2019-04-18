#include <stdio.h>
#include <math.h>

int max(int N){
    for(int i=sqrt(N); i<=N; i++){
        if(N%i==0){
            int x = N/i;
            if(x>i)
                return x;
            else
                return i;
        }
    }
}
// gcc test.c -o test -lm

int moves(int N){
    int count=0;
    while(N!=0){
        if(N-max(N)>1)
            N = max(N);
        else
            N--;
        count++;
    }
    return count;
}

int main(){
    int N[1000], q;
    printf("Enter length:");
    scanf("%d", &q);
    printf("Enter array:\n");
    for(int i=0; i<q; i++)
        scanf("%d", &N[i]);
    printf("Output: \n");
    for(int i=0; i<q; i++)
        printf("%d ", moves(N[i]));

    return 0;
}
