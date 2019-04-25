#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
int i;
int l[t],r[t],c[t],p[t],q[t],s[t],n[t],m[t];
for (i=0;i<t;++i)
{
scanf("%d%d",&n[i],&m[i]);
scanf("%d%d%d%d%d%d",&l[i],&r[i],&c[i],&p[i],&q[i],&s[i]);
}
int P,Q,S,j,N,M,k=0;
while(t!=0)
{
N=n[k];
M=m[k];
Q=q[k];
P=p[k];
S=s[k];
int L[M],R[M],C[M];
L[0]=l[k];
R[0]=r[k];
C[0]=c[k];
int count[N+1];
for(i=0;i<N+1;i++)
	count[i]=0;
for(i=0;i<M;i++)
{
for(j=L[i];j<=R[i];j++)
count[j]+=C[i];
if(i+1<M)
{
L[i+1]=(L[i]*P+R[i])%N+1;
R[i+1]=(R[i]*Q+L[i])%N+1;
if(L[i+1] > R[i+1])
{int temp;
temp=L[i+1];
L[i+1]=R[i+1];
R[i+1]=temp;}
C[i+1] =(C[i]*S)%1000000+1;
}
}
printf("\n");
int index,max;
max=-1;
for(i=0;i<=N;i++)
{
if(count[i]>max)
    {max=count[i];
    index=i;}
}
printf("%d %d",index,max);
k++;
t--;
}
}
