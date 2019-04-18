#include<stdio.h>

int main()
{
	int i,j,n,k;
	scanf("%d%d",&n,&k);
	int arr[n+1];
	for(i=1;i<=n;i++)
		arr[i] = -1;
	char s[k];
	scanf("%s",&s);
	
	int left = 1, right = n;
	for(i=1;i<=k;i++)
	{
		if((left+right)%2==0)
			arr[(left+right)/2] = i;
		else
		{
			if(s[i-1]=='L')
				arr[(left+right)/2] = i;
			else
				arr[(left+right)/2+1] = i;	
		}
		int max = 0,tmpleft,tmpright;
		for(j=1;j<=n;j++)
		{
			int count = 0;
			if(arr[j]==-1)
			{
				tmpleft = j;
				tmpright = j;
				count++;
				while(arr[j+1]==-1)
				{
					j++;
					count++;
					tmpright = j;
				}
			}
			if(count>max)
			{
				max = count;
				left = tmpleft;
				right = tmpright;
			}
		}	
	}
	int q;
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		scanf("%d",&j);
		printf("%d\n",arr[j]);
	}
	return 0;
}
