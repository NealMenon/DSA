#include <stdio.h>
int n;
int min=9999;

int check(int a[n]){
  for(int i=0; i<n-1; i++)
    if(a[i]<a[i+1])
      return 0;
  return 1;
}

int shoot(int a[n], int index, int cost){
  for(int i=index; i<n-1; i++){
    if(a[i]<a[i+1]){
      int temp[n];
      for(int j=0; j<n; j++)
        temp[j]=a[j];
      temp[i+1]=temp[i];
      shoot(temp, i+1, cost+a[i+1]-a[i]);
      for(int j=0; j<n; j++)
        temp[j]=a[j];
      temp[i]=temp[i+1];
      shoot(temp, i+1, cost+a[i+1]-a[i]);
    }
  }
  if(cost<min&&check(a)){
    min=cost;
    // for(int i=0; i<n; i++)
    //   printf("%d ", a[i]);
    // printf(" - %d %d\n", cost, index);
  }
}

int main()
{
  scanf("%d", &n);
  int a[n];
  for(int i=0; i<n; i++)
    scanf("%d", &a[i]);
  shoot(a,0,0);
  printf("\nMin = %d\n", min);
  return 0;
}
