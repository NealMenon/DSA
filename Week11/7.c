#include<stdio.h>
#include<string.h>
// A function to implement bubble sort 
void bubbleSort(int arr[],char str[][100],int n) 
{ 
   int i, j,temp;
   char tempc[100]; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] < arr[j+1]) 
              {
              	temp=arr[j];
              	arr[j]=arr[j+1];
              	arr[j+1]=temp;
              	strcpy(tempc,str[j]);
              	strcpy(str[j],str[j+1]);
              	strcpy(str[j+1],tempc);
              }
} 
int main()
{
int n;
scanf("%d",&n);
char str[n][100];
int i,j;
for(i=0;i<n;i++)
scanf("%s\n",&str[i]);
int k;
scanf("%d",&k);
int visited[n],count[n];
for(i=0;i<n;++i)
{
visited[i]=0;
count[i]=1;
}
for(i=0;i<n;i++)
{
if(visited[i]==0)
{
for(j=i+1;j<n;j++)
{
if(strcmp(str[i],str[j])==0&&visited[j]==0)
{
visited[j]=1;
count[i]++;
count[j]=-1;
}
}
visited[i]=1;
}
}
int N=0;
for(i=0;i<n;i++)
if(count[i]!=0)
	N++;
int q=0;
int newcount[N];
char newstr[N][100];
for(i=0;i<n;i++)
	if(count[i]!=0)
	{
		newcount[q]=count[i];
		strcpy(newstr[q],str[i]);
		q++;
	}
bubbleSort(newcount,newstr,N);
for(i=0;i<k;i++)
printf("\n%s",newstr[i]);
}
