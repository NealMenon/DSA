#include <stdio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void sort(int pro[], int cap[], int n)
{
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n-i-1; j++)
    {
      if((pro[j])<(pro[j+1]))
      {
        swap(&pro[j], &pro[j+1]);
        swap(&cap[j], &cap[j+1]);
      }
    }
  }
}



int main()
{
    int k, w, n;
    printf("Enter k: ");
    scanf("%d", &k);
    printf("Enter w: ");
    scanf("%d", &w);
    printf("Enter n: ");
    scanf("%d", &n);
    int pro[n], cap[n], visited[n];
    printf("Enter profit array: \n");
    for(int i=0; i<n; i++)
    scanf("%d", &pro[i]);
    printf("Enter profit array: \n");

    for(int i=0; i<n; i++){
        scanf("%d", &cap[i]);
        visited[i]=0;
    }

    sort(pro, cap, n);
    int p=0;
    for(int j=0; j<n; j++){
        if(visited[j]!=1&&w>=cap[j]&&p<k){
            visited[j]=1;
            w+=pro[j];
            p++;
            j=-1;
        }
    }

    printf("w = %d \n",w);

    return 0;
}
