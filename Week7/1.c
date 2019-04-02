#include<stdio.h>

int t[1000][1000];
int depth[1000];
int k;

void dfs(int cur, int visited[],int deep, int n)
{

    int i;
    visited[cur] = 1;
    deep++;
    for(i = 0; i < n; i++)
    {
        // printf("cur= %d\n",cur);
        // printf("i: %d; t[cur][i]: %d; visited[i]: %d\n",i,t[cur][i],visited[i]);
        if(t[cur][i] == 1 && visited[i] == 0){
            visited[i] = 1;
            // printf("%d\n",deep);
            dfs(i,visited,deep,n);
            visited[i] = 0;
            depth[k++] = deep;
        }
    }


}
int main(){
    int n,x;
    int visited[n];
    scanf("%d %d",&n,&x);
    int i,j;
    for(i=0;i<n-1;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        a = a-1;
        b = b-1;
        t[a][b] = 1;
        t[b][a] = 1;
        visited[i] = 0;
    }
    visited[i] = 0;


    dfs(0,visited,0,n);
    int temp;
    for( i = 0; i < n; i++)
    {
        for( j = 0; j < n; j++)
        {
            if(depth[i] > depth[j]){
                temp = depth[i];
                depth[i] = depth[j];
                depth[j] = temp;
            }
        }

    }
    printf("%d\n",depth[0]*2);

    return 0;
}
