#include<stdio.h>
#include<math.h>
int main()
{
int k,t,n;
scanf("%d%d%d",&n,&k,&t);
int a[n];
int i,j;
for (i=0;i<n;++i)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n-k;i++)
for(j=i+1;j<=i+k;j++)
		if(abs(a[i]-a[j])<=t)
		{
			printf("Yes");
			return;
		}
printf("No");
}
