#include <stdio.h>

int check(int pumps[][2], int index, int N){
    int fuel=0;
    for(int i=index; i<N; i++){
        fuel += pumps[i][0];
        if(fuel<pumps[i][1])
            return 0;
        else
            fuel-=pumps[i][1];
    }
    for(int i=0; i<=index; i++){
        fuel += pumps[i][0];
        if(fuel<pumps[i][1])
            return 0;
        else
            fuel-=pumps[i][1];
    }
}

int main(){
    int N;
    scanf("%d", &N);

    int pumps[N][2];
    for(int i=0; i<N; i++)
        scanf("%d %d", &pumps[i][0], &pumps[i][1]);


    for(int i=0; i<N; i++)
        if(check(pumps, i, N)){
            printf("%d", i);
            return 0;
        }
    printf("-1");
    return 0;
}
