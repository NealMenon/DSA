#include<stdio.h>
#include<math.h>
void main()
{
  int n,i=0, k;
  printf("Enter the no of questions ");
  scanf("%d",&n );
  printf("Enter k " );
  scanf("%d",&k );
  int sum=0;
  int v=4;
  int div=k;
  int temp=0;
  while(v<=n)
  {
    temp=v;
    div=k;
    while(temp>=1)
    {
      sum+=temp;
      temp=v;
      temp=floor(temp/div);
      div=div*kx;

    }

    if(sum>=n)
      break;
    else
    {
      v++;
      sum=0;
    }
  }
  printf("\n%d\n",v );
}
