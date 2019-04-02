#include <stdio.h>
/*
0 0 0 1 0 0 1
0 0 0 0 0 0 0
0 0 0 0 0 1 0
1 0 0 0 0 0 1
0 0 0 0 0 0 0
0 0 1 0 0 0 0
1 0 0 1 0 0 0
*/
void swap(int n, int arr[n], int i, int j)
{
	int t=arr[i];
	arr[i]=arr[j];
	arr[j]=t;
}

int main()
{
	int i, j, n;
	printf("\nEnter n:\n");
	scanf("%d", &n);
	int arr[n], mat[n][n];
	printf("\nEnter elements:\n");
	for (i=0; i<n; i++)
		scanf("%d", &arr[i]);
	printf("\nEnter matrix:\n");
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
		{
			scanf("%d", &mat[i][j]);
			if (mat[i][j])
			{
				if (i<j&&arr[i]>arr[j])
					swap(n, arr, i, j);
				else if (i>j&&arr[i]<arr[j])
					swap(n, arr, i, j);
			}
				
		}
	
	printf("\n");
	for (i=0; i<n; i++)
		printf("%d ", arr[i]);
	return 0;
}