#include<stdio.h>

void sort(int arr[], int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(arr[j+1]>arr[j])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
}

int main()
{
	int i,n,k;
	scanf("%d%d",&n,&k);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	int count = 0;
	for(i=0;i<k;i++)
	{
		sort(arr,n);
		count+=arr[0];
		arr[0]/=2;
	}
	printf("%d",count);
	return 0;
}
