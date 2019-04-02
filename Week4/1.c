#include "stdio.h"
void main()
{
  int n,i=0, s;
  printf("Enter the size ");
  scanf("%d",&n );
  printf("Enter the budget " );
  scanf("%d",&s );
  printf("Enter the array " );
  int a[n], b[n];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    b[i] = a[i]+1;
  }
//sort
  int sum=0;
  while(n>0)
  {
    for(i=n;i>0;i--)
    {
      sum+=a[i-1]+(n*i);
    }
    if(s>=sum)
      break;
    else
    {
      sum=0;
      n--;
    }
  }

  printf("\n%d %d ",n,sum );
}
