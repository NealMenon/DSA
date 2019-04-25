#include <stdio.h>
int main()
{
int t,n;
scanf("%d",&t);
scanf("%d",&n);
int a[n];
for (int i = 0; i < n; ++i)
{
	scanf("%d",&a[i]);
}
int result[2];
int i,j,temp;
for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
		if(a[i]+a[j]==t)
			{
			result[0]=a[i];
			result[1]=a[j];}
if(result[1]<result[0])
{
	temp=result[0];
	result[0]=result[1];
	result[1]=temp;
}
printf("%d %d",result[0],result[1]);
}
