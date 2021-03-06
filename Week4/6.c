#include<stdio.h>
int binSearch(int a[],int l,int r,int x)
{
  while(l<=r)
  {
    int mid=(l+r)/2;
    if(a[mid]<x)
        l=mid+1;
    else if(a[mid]>x)
    {
        r=mid-1;
    }
    else
        return mid;
  }
  return -1;
}
void sort(int a[],int n)
{
  int temp;
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
}
void main()
{
  int a[100],n,i=0,d;
  printf("Enter the size ");
  scanf("%d",&n );

  printf("Enter the array \n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);

  printf("Enter the difference ");
    scanf("%d",&d );

  sort(a,n);
  int k,flag=-1,sum=-1;
  for(int i=0;i<n;i++)
  {
    k=d+a[i];
    flag=binSearch(a,0,n-1,k);
    if(flag!=-1)
    {
      sum=a[i]+a[flag];
      break;
    }
  }
  printf("\n%d",sum );
}
