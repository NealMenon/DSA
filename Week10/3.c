#include<stdio.h>

int leftHeap[100],rightHeap[100],left=-1,right=-1;

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void insert(int heap[],int dir,int item)
{
	int i;
	if(dir==-1)
	{
		heap[++left] = item;
		i = left;
		while(heap[i]>heap[(i-1)/2])
		{
			swap(&heap[i],&heap[(i-1)/2]);
			i = (i-1)/2;
		}	
	}
		
	else
	{
		heap[++right] = item;
		i = right;
		while(heap[i]<heap[(i-1)/2])
		{
			swap(&heap[i],&heap[(i-1)/2]);
			i = (i-1)/2;
		}	
	}
}

float peekTop(int heap[])
{
	return heap[0];
}

float getTop(int heap[],int dir)
{
	int i = 0;
	float top = heap[0];
	if(dir==-1)
	{
		i=0;
		swap(&heap[0],&heap[left]);
		while((heap[2*i+1]>heap[i]||heap[2*i+2]>heap[i])&&(2*i+1<left))
		{
			if(heap[2*i+1]>heap[2*i+2])
			{
				swap(&heap[i],&heap[2*i+1]);
				i = 2*i+1;
			}
			else
			{
				swap(&heap[i],&heap[2*i+2]);
				i = 2*i+2;
			}
		}
		left--;
	}
	else
	{
		i=0;
		swap(&heap[0],&heap[right]);
		while((heap[2*i+1]<heap[i]||heap[2*i+2]<heap[i])&&(2*i+2<right))
		{
			if(heap[2*i+1]<heap[2*i+2])
			{
				swap(&heap[i],&heap[2*i+1]);
				i = 2*i+1;
			}
			else
			{
				swap(&heap[i],&heap[2*i+2]);
				i = 2*i+2;
			}
		}
		right--;
	}
	return top;
}

float getMedian(int a[],int i,int m)
{
	if(left>right)
	{
		if(a[i]>=m)
		{
			insert(rightHeap,1,a[i]);
		}
		else
		{
			insert(rightHeap,1,getTop(leftHeap,-1));
			insert(leftHeap,-1,a[i]);
		}
		return ((peekTop(leftHeap)+peekTop(rightHeap))/2);
	}
	else if(left<right)
	{
		if(a[i]>=m)
		{
			insert(leftHeap,-1,getTop(rightHeap,1));
			insert(rightHeap,1,a[i]);
		}
		else
		{
			insert(leftHeap,-1,a[i]);
		}
		return ((peekTop(leftHeap)+peekTop(rightHeap))/2);
	}
	else
	{
		if(a[i]<m)
		{
			insert(leftHeap,-1,a[i]);
			return peekTop(leftHeap);
		}
		else
		{
			insert(rightHeap,1,a[i]);
			return peekTop(rightHeap);
		}
	}
}

int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	float m = 0;	// Effective Median = 0	
	for(i=0;i<n;i++)
	{
		m = getMedian(arr,i,m);
		printf("%.1f ",m);
	}
}
