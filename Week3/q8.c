#include<stdio.h>
int vis[100];

void reachable(int n, int m, int in[100][2], int v){
    for(int i = 0; i < n; i++){
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
    printf("Enter buildings: ");
    scanf("%d", &n);
    printf("Enter sharks: ");
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        scanf("%d %d", &in[i][0], &in[i][1]);
        in[i][0]--;
        in[i][1]--;
    }
    int t, x, y;
    printf("Enter number of queries: ");
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++){
        printf("Enter the x and y buildings: ");
        scanf("%d %d", &x, &y);
        reachable(n, m, in, x-1);
        if(vis[y-1])
            printf("Yes\n");
        else 
            printf("No\n");
    }
    
    
    
    return 0;
}