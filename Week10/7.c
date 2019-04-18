#include<stdio.h>

int check(int arr[], int a, int b)
{
	int i,zero = 0,one = 0;
	for(i=a;i<=b;i++)
		if(arr[i]==1)
			one++;
		else
			zero++;
	
	if(zero==one)
		return 1;
	return 0;				
}

int main()
{
	int i,j,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	int count = 0;	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(check(arr,i,j))
				count++;
		}
	}	
	printf("%d",count);
}
