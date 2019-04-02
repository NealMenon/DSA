#include <stdio.h>

int count=0, ans=0;

void trav(int x, int n, int m, int mat[n][n], int cat[n])
{
	int i, flag=1;
	if (cat[x])
		count++;

	if (count<=m)
	{
		for (i=0; i<n; i++)
			if (mat[x][i])
			{
				flag=0;
				trav(i, n, m, mat, cat);
			}
		if (flag)
			ans++;
	}
	else
		count--; //***not sure. test and revise
}

int main()
{
	int n, m, i, x, y;
	printf("\nEnter n and m:\n");
	scanf("%d %d", &n, &m);
	int cat[n], mat[n][n];
	for (x=0; x<n; x++)
		for (y=0; y<n; y++)
			mat[x][y]=0;
	for (i=0; i<n; i++)
	{
		printf("\nEnter 1 if vertex %d has cat:\n", i+1);
		scanf("%d", &cat[i]);
	}
	for (i=1; i<n; i++)
	{
		printf("\nEnter edge no. %d:\n", i);
		scanf("%d %d", &x, &y);
		mat[x-1][y-1]=1;
	}
	trav(0, n, m, mat, cat);
	printf("\n\n%d\n", ans);
	
	return 0;
}