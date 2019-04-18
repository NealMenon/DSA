#include<stdio.h>

void sort(int a[],int n,int k)		// iterates k times only so only last k items are sorted
{
	int i,j;
	for(i=0;i<k;i++)
		for(j=0;j<n-i-1;j++)
			if(a[j+1]<a[j]) {
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
}

int main()
{
	int i,j,n,k;
	scanf("%d%d",&n,&k);
	int left[n],right[n],arr[k*k];

	for(i=0;i<n;i++)
		scanf("%d",&left[i]);

	for(i=0;i<n;i++)
		scanf("%d",&right[i]);

	sort(left,n,k);			//  O(n*k) time complexity to sort
	sort(right,n,k);

	int t=0;
	for(i=n-1;i>=n-k;i--)
	{
		for(j=n-1;j>=n-k;j--)
		{
			arr[t++] = left[i]+right[j];
		}
	}

	sort(arr,k*k,k);

	for(i=k*k-1;i>=(k*k)-k;i--)
		printf("%d ",arr[i]);
	return 0;
}
/*

Done: 4, 6, 8
Skip: 3
Skip: 1, 2, 5, 7


*/
