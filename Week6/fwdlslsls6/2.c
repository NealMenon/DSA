#include <stdio.h>

int count=0;

void swap(int n, int m, int k, int x, int y, int arr[n+1][m])
{
	int i, j, t;
	if (k)
	{
		for (i=0; i<=n; i++)
		{
			if (arr[n][x]>arr[n][y])
			{
				t=arr[n][x];
				arr[n][x]=arr[n][y];
				arr[n][y]=t;
			}
		}
	}
	else
	{
		for (i=0; i<=n; i++)
		{
			if (arr[n][x]<arr[n][y])
			{
				t=arr[n][x];
				arr[n][x]=arr[n][y];
				arr[n][y]=t;
			}
		}
	}
	count++;
	printf("\nCount: %d\n", count);
	for (i=0; i<m; i++)
		printf("%d %d\n", arr[0][i], arr[1][i]);

}

int main()
{
	int index, num, i, j, n, m, k, min, max;
	printf("\nEnter n, m and k:\n");
	scanf("%d %d %d", &n, &m, &k);
	int arr[n][m];
	printf("\nEnter arrays:\n");
	for (i=0; i<n; i++)
		for (j=0; j<m; j++)
			scanf("%d", &arr[i][j]);
	if (k)
	{
		for (num=n-1; num>=0; num--)
		{
			for (i=0; i<m-1; i++)
			{
				max=-99999;
				for (j=i+1; j<m; j++)
				{
					if (arr[num][j]>max)
					{
						index=j;
						max=arr[num][j];
					}
				}
				if (max>arr[num][i])
					swap(num, m, k, index, i, arr);
			}
		}
	}
	else
	{
		for (num=n-1; num>=0; num--)
		{
			for (i=0; i<m-1; i++)
			{
				min=99999;
				for (j=i+1; j<m; j++)
				{
					if (arr[num][j]<min)
					{
						index=j;
						min=arr[num][j];
					}
				}
				if (min<arr[num][i])
					swap(num, m, k, index, i, arr);
			}
		}
	}	
	return 0;
}