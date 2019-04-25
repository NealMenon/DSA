#include<stdio.h>
#include<string.h>
int main()
{
int m,n;
scanf("%d %d",&m,&n);
char magazine[m][100],note[n][100];
int i,j;
for(i=0;i<m;i++)
	scanf("%s",magazine[i]);
for(i=0;i<n;i++)
	scanf("%s",note[i]);
int visitedn[n],visitedm[m];
for(i=0;i<n;i++)
visitedn[i]=0;
for(i=0;i<m;i++)
visitedm[i]=0;
for(i=0;i<n;i++)
for(j=0;j<m;j++)
	if(strcmp(note[i],magazine[j])==0&&visitedm[j]==0)
		{	
			visitedm[j]=1;
			visitedn[i]=1;
		}
for(i=0;i<n;i++)
	if(visitedn[i]!=1)
		{
		printf("No");
		return;
		}
printf("Yes");
}
