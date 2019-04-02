#include <stdio.h>
int n;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void sort(int a[n][4])
{
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<n-i-1; j++)
      {
        if(a[j][2]>a[j+1][2])
        {
          swap(&a[j][0], &a[j+1][0]);
          swap(&a[j][1], &a[j+1][1]);
          swap(&a[j][2], &a[j+1][2]);
          swap(&a[j][3], &a[j+1][3]);
        }
      }
    }
}

int main()
{
  scanf("%d", &n);
  int a[n][4];

  for(int i=0; i<n; i++)
  {
    scanf("%d %d", &a[i][0], &a[i][1]);
    a[i][2]=a[i][0]+a[i][1];
    a[i][3]=0;
  }
  for(int i=0; i<n; i++)
  {
    printf("%d %d %d %d\n", a[i][0], a[i][1], a[i][2], a[i][3]);
  }
  printf("\n");
  sort(a);
  for(int i=0; i<n; i++)
  {
    printf("%d %d %d %d\n", a[i][0], a[i][1], a[i][2], a[i][3]);
  }

  int sum=0;
  a[0][1] = a[0][0]+a[0][1];
  for(int i=1; i<n; i++)
  {
    if(a[i][0]>a[i-1][1])
      a[i][1]+=a[i][0]-a[i-1][1];
    a[i][1]+=a[i-1][1];
  }
  for(int i=0; i<n;  i++)
  {
    a[i][1]-=a[i][0];
  }
  for(int i=0; i<n; i++)
  {
    printf("%d %d %d %d\n", a[i][0], a[i][1], a[i][2], a[i][3]);
  }
  printf("\n");

  for(int i=0; i<n; i++)
    sum+=a[i][1];

  printf("%f", (float)sum/n);
}
