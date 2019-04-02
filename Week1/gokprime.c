
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,digit,num = 2;;
	scanf("%d",&n);
	int arr[n][n];
	int new = n*n - 1;
	digit = n*n;
	i = 0;
	int PrimArr[digit];  
	while(i<=new)
	{
		for(j = 2 ; j < num ; j++)
		{
			if(num%j==0)
				break;
		}
		if(j==num)
		{
			PrimArr[i++] = j;
		}
		num++;
	}
	for(i = 0 ; i <= new; i ++)
		printf("%d \n",PrimArr[i]);  
	int row0 =0, col0= 0, rowN=n-1, colN = n-1;
	j = new;
	while(j>=0)
	{
		for(i = colN; i >= col0 ; i--)
		{
			arr[rowN][i] = PrimArr[j--];
		//	printf("%d %d %d \n", rowN, i, arr[rowN][i]);
		}
		rowN--;
		
		for(i = rowN; i >= row0 ; i--)
		{
			arr[i][col0] = PrimArr[j--];
		//	printf("%d %d %d \n", i,col0, arr[i][col0]);
		}
		col0++;
		
		for(i = col0; i <= colN ; i++)
		{
			arr[row0][i] = PrimArr[j--];
		//	printf("%d %d %d \n", row0, i, arr[row0][i]);
		}
		row0++;
		
		for(i = row0; i <= rowN ; i++)
		{
			arr[i][colN] = PrimArr[j--];
		//	printf("%d %d %d \n",  i, colN, arr[i][colN]);
		}
		colN--;
	}
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			printf("%d ",arr[i][j]);
			if(arr[i][j]/10<1)
				printf(" ");		
		}
		printf("\n");
	}
}
