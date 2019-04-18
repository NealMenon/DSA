#include<stdio.h>

int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	int flag = 0;
	for(i=n-1;i>0;i--)
	{
		if(arr[i]<arr[(i-1)/2])
		{
			flag = 1;
			break;
		}
	}
	
	if(!flag)
		printf("True");
	else
		printf("False");		
}
