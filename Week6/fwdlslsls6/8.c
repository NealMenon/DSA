#include <stdio.h>
#include <string.h>

char str[100];

int n, m;
int r[8]={-1, 0, 1, -1, 1, -1, 0, 1};
int c[8]={-1, -1, -1, 0, 0, 1, 1, 1};


int checknext(char arr[n][m], int index, int i, int j)
{
	int k, x, y;
	for (k=0; k<8; k++)
	{
		x=i+r[k]; y=j+c[k];
		if (arr[x][y]==str[index]&&x<n&&y<m)
		{
			if (str[index+1]=='\0')
				return 1;
			else
				return checknext(arr, index+1, x, y);
		}
	}
	return 0;
}

int find(int n, int m, char arr[n][m])
{
	int i, j;
	char first=str[0];
	printf("\ntest\n");
	printf("%s\n\n", str);
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			if (arr[i][j]==first)
			{
				if (checknext(arr, 1, i, j))
					return 1;
			}
		}
	}
	return 0;
}

int main()
{
	int i, j, t;
	printf("\nEnter number of strings and number of characters in each string:\n");
	scanf("%d %d", &n, &m);
	char arr[n][m];
	printf("\nEnter matrix:\n");
	//fflush(stdin);
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			scanf("%c", &arr[i][j]);
		}
		if (i!=(n-1))
			scanf("\n");
	}
	printf("\nEnter number of test cases:\n");
	scanf("%d", &t);
	int ans[t];
	for (i=0; i<t; i++)
	{
		printf("\nEnter word %d:\n", i+1);
		scanf("%s", str);
		ans[i]=find(n, m, arr);
	}
	for (i=0; i<t; i++)
		if (ans[i])
			printf("\nYes.\n");
		else
			printf("\nNo.\n");
	return 0;
}