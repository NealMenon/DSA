#include<stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bSort(int arr[], int n)
{
   int i, j;
   for(i=0;i<n-1;i++)
       for (j=0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
void shift(int a[],int n)
{
  for(int i=1;i<n;i++)
    a[i-1]=a[i];
}
int main()
{
  int n,k;
  printf("Enter n : ");
  scanf("%d",&n);

  printf("Enter k: ");
  scanf("%d",&k);

  int a[n],i;
  printf("Enter array : ");

  for(i=0;i<n;i++)
    scanf("%d",&a[i]);

  bSort(a,n);
  i=0;
  int op=0;
  while(i<n&&n>=0){
    if(a[i]>=k)
      i++;
    else {
      op++;
      a[i+1]=a[i] + 2*a[i+1];;
      shift(a,n);
      n--;
      bSort(a,n);
    }
  }
  printf("\n%d",op );
  return 0;
}
/*
6 7
1 2 3 9 10 12
*/
