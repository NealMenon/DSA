

#include<stdio.h>
#include<string.h>
int main()
{
int n;
scanf("%d",&n);
char books[n][100];
char hashbooks[n][100];
for (int i = 0; i < n; ++i)
{
scanf("%s",&books[i]);
strcpy(hashbooks[i],books[i]);
}
int q;
scanf("%d",&q);
char queries[q][100],hashqueries[q][100];
for (int i = 0; i < q; ++i)
{
scanf("%s",&queries[i]);
strcpy(hashqueries[i],queries[i]);
}
for(int i=0;i<q;i++)
for(int j=0;j<strlen(hashqueries[i]);j++)
	if(queries[i][j]=='a'||queries[i][j]=='e'||queries[i][j]=='i'||queries[i][j]=='o'||queries[i][j]=='u'||queries[i][j]=='A'||queries[i][j]=='E'||queries[i][j]=='I'||queries[i][j]=='O'||queries[i][j]=='U')
		hashqueries[i][j]='#';
for(int i=0;i<n;i++)
for(int j=0;j<strlen(hashbooks[i]);j++)
	if(hashbooks[i][j]=='a'||hashbooks[i][j]=='e'||hashbooks[i][j]=='i'||hashbooks[i][j]=='o'||hashbooks[i][j]=='u'||hashbooks[i][j]=='A'||hashbooks[i][j]=='E'||hashbooks[i][j]=='I'||hashbooks[i][j]=='O'||hashbooks[i][j]=='U')
		hashbooks[i][j]='#';
int j;
int i;
char result[q][100];
for(i=0;i<q;i++)
	strcpy(result[i],".....");
int visited[q];
for (i = 0; i< q; ++i)
{
	visited[i]=0;
}
for(i=0;i<q;i++)
	for(j=0;j<n;j++)
	{
	if(strcmp(queries[i],books[j])==0)
		{
			strcpy(result[i],books[j]);
			visited[i]=1;
			break;
		}
	}
for(i=0;i<q;i++)
	for(j=0;j<n;j++)
	{
	if(strcasecmp(hashqueries[i],hashbooks[j])==0&&visited[i]!=1)
		{
			strcpy(result[i],books[j]);
			break;
		}
	}
for(i=0;i<q;i++)
	printf("\n%s",result[i]);
}
