#include<stdio.h>
int sort(int a[],int n)
{
  int temp;
  int flag=0;
  int cycle=0;
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        if(flag==0)
        {
          cycle=j+1;
          flag=1;
        }
      }
    }
  }
  return cycle;
}
int binSearch(int a[],int l,int r,int x)
{
  while(l<=r)
  {
    int mid=(l+r)/2;
    if(a[mid]<x)
        l=mid+1;
    else if(a[mid]>x)
        r=mid-1;
    else
        return mid;
  }
  return -1;
}
void main()
{
  int a[100],n,i=0,k=0;
  printf("Enter the size ");
  scanf("%d",&n );

  printf("Enter the array \n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);

  printf("Enter the value ");
    scanf("%d",&k );

  int cycle,search;
  cycle=sort(a,n);
  search=binSearch(a,0,n-1,k)+1;
  search=search+cycle;
  if(search>n)
    search=search-n;
  printf("\n%d",search );
}
