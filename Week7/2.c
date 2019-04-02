#include<stdio.h>
#include<stdbool.h>
#define inf 0x7fffffff
#define ll long long
#define N 100001
#define M 300001
#define mod 1000007
struct data{int to,nx;}e[M];
int head[N];
int n,m,now,cnt,top;
int v[N],dfn[N],low[N],q[N];
int scc,mn[N],belong[N],num[N];
bool vis[N],inq[N];
ll ans1=1,ans2;
int min(int a, int b){
    if(a<b)
        return a;
    return b;
};
void dfs(int a)
{
    vis[a]=inq[a]=1;
    low[a]=dfn[a]=++cnt;
    q[++top]=a;
    int i=head[a];
    while(i)
       {if(!vis[e[i].to])
           {
            dfs(e[i].to);
            low[a]=min(low[a],low[e[i].to]);
           }
        else if(inq[e[i].to])low[a]=min(low[a],dfn[e[i].to]);
        i=e[i].nx;
       }
    if(low[a]==dfn[a])
       {scc++;
        belong[a]=scc;
        mn[scc]=inf;
        do
        {
            now=q[top--];
            inq[now]=0;
            belong[now]=scc;
            if(v[now]<mn[scc]){mn[scc]=v[now];num[scc]=0;}
            if(v[now]==mn[scc])num[scc]++;
        }
        while(now!=a);
    }
}
int main()
{
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++) scanf("%d",&v[i]);
    scanf("%d",&m);
    for(i=1;i<=m;i++)
       {int x,y;
        scanf("%d%d",&x,&y);
        e[i].to=y;
        e[i].nx=head[x];
        head[x]=i;
       }
    for( i=1;i<=n;i++) {if(!vis[i])dfs(i);}
    for(i=1;i<=scc;i++)
    {
       ans1 *= num[i];
       ans2 += mn[i];
       ans1 %= 1000007;
    }
    printf("%lld %lld\n",ans2,ans1);
    return 0;
}


