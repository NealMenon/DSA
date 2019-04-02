#include <stdio.h>
int vis[100];

void reachable(int n, int m, int in[100][2], int v){
    printf("v = %d\n", v+1);
    for(int i = 0; i < m; i++){
        if(in[i][0] == v && vis[in[i][1]] == 0){
            vis[in[i][1]] = 1;
            reachable(n, m, in, in[i][1]);
        }
    }
}



void init() {
    for(int i = 0; i < 100; i++)
        vis[i] = 0;
}

int main() {
    
    int n, m, in[100][2];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter m: ");
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        scanf("%d %d", &in[i][0], &in[i][1]);
        in[i][0]--;
        in[i][1]--;
    }
    int flag;
    for(int i = 0; i < n; i++) {
        init();
        reachable(n, m, in, i);
        flag = 1;
        for(int j = 0; j < n; j++)
            if(vis[j] == 0)
                flag = 0;
        if(flag)
            printf("Yes - %d\n\n", i+1);
        
    }
    
    
    return 0;
}