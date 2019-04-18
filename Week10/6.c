#include<stdio.h>

int min(int arr[],int n)
{
	int i,min = 9999,count = 0;
	for(i=0;i<n;i++)
		if(arr[i]<min&&arr[i]!=-1)
			min = arr[i];
	
	for(i=0;i<n;i++)
		if(arr[i]==min)
			count++;
	
	if(min!=9999)
		return count;				
	else
		return -1;
}

int max(int arr[], int n)
{
	int i,max = -1,count = 0;
	for(i=0;i<n;i++)
		if(arr[i]>max)
			max = arr[i];
	
	for(i=0;i<n;i++)
		if(arr[i]==max)
			count++;
	
	if(max!=-1)
		return count;				
	else
		return -1;
}

int diff(int arr[], int n)
{
	int i, min = 9999, max = -1;
	
	for(i=0;i<n;i++)
	{
		if(arr[i]!=-1&&arr[i]<min)
			min = arr[i];
		if(arr[i]>max)
			max = arr[i];	
	}
	
	if(max==-1)
		return -1;
	else
	{
		if(min!=max)
		{
			for(i=0;i<n;i++)
				if(arr[i]==min)
				{
					arr[i] = -1;
					break;
				}

			for(i=0;i<n;i++)
				if(arr[i]==max)
				{
					arr[i] = -1;
					break;
				}
			return max-min;					
		}
		else
		{
			for(i=0;i<n;i++)
				if(arr[i]==min)
				{
					arr[i] = -1;
					break;
				}
			return 0;	
		}
	}		
}

int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		arr[i] = -1;
	
	
	for(i=0;i<n;i++)
	{
		char ch[20];
		scanf("%s",&ch);
		if(strcmp(ch,"CountHigh")==0)
			printf("%d\n",max(arr,n));
		else if(strcmp(ch,"CountLow")==0)
			printf("%d\n",min(arr,n));
		else if(strcmp(ch,"Push")==0)
		{
			int item;
			scanf("%d",&item);
			arr[i] = item;
		}
		else if(strcmp(ch,"Diff")==0)
			printf("%d\n",diff(arr,n));
	}
	return 0;
}
