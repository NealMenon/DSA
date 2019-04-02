#include<stdio.h>
int min(int a[],int s,int e)
{
  int min=a[s];
  for(int i=s;i<=e;i++)
  {
    if(min>a[i])
      min=a[i];
  }
  return min;
}
void main()
{
  int n;
  printf("Enter N " );
  scanf("%d",&n );
  int a[n];
  printf("Enter array : " );
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  int size=0,sum=0,i=0,e=0;

  while(size<n)
  {
    do
    {
      sum=sum+min(a,i,e);
      i++;
      e=i+size;
    }while(e<n&&i<n);

    i=0;
    size++;
  }

  printf("%d ",sum );
}
