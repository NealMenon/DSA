#include<stdio.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	for(i=1;i<n;i++)
	{
		int j = i;
		while(arr[j]>arr[(j-1)/2]&&(j-1)/2>=0)
		{
			int tmp = arr[j];
			arr[j] = arr[(j-1)/2];
			arr[(j-1)/2] = tmp;
			j = (j-1)/2;
		}
	}	
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;	
}
