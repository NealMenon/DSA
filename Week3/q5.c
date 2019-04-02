#include <stdio.h>


int main() {
    
    int n, arr[15][15];
    printf("Enter n: ");
    scanf("%d", &n);
    
    for(int i = 0; i < nl i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    
    
    return 0;
}



#include<stdio.h>
int ctr=2;
int count;

void numberOfOnes(int n, int m[][n], int i,int j) {
  //printf("%d,%d has %d\n",i,j,m[i][j]);
  if(m[i][j+1] == 1 && j<n-1) {
    m[i][j+1] = ctr;
    count++;
    numberOfOnes(n,m,i,j+1);
  }
  if(m[i+1][j+1] == 1 && i<n-1 && j<n-1) {
    m[i+1][j+1] = ctr;
    count++;
    numberOfOnes(n,m,i+1,j+1);
  }
  if(m[i+1][j] == 1 && i<n-1) {
    m[i+1][j] = ctr;
    count++;
    numberOfOnes(n,m,i+1,j);
  }
  if(m[i+1][j-1] == 1 && i<n-1 && j>=1) {
    m[i+1][j-1] = ctr;
    count++;
    numberOfOnes(n,m,i+1,j-1);
  }
  if(m[i][j-1] == 1 && j>=1) {
    m[i][j-1] = ctr;
    count++;
    numberOfOnes(n,m,i,j-1);
  }
  if(m[i-1][j-1] == 1 && j>=1 && i>=1) {
    m[i-1][j-1] = ctr;
    count++;
    numberOfOnes(n,m,i-1,j-1);
  }
  if(m[i-1][j] == 1 && i>=1) {
    m[i-1][j] = ctr;
    count++;
    numberOfOnes(n,m,i-1,j);
  }
  if(m[i-1][j+1] == 1 && i>=1 && j<n-1) {
    m[i-1][j+1] = ctr;
    count++;
    numberOfOnes(n,m,i-1,j+1);
  }
}

int main() {
  int n;
  scanf("%d",&n);
  int m[n][n];
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      scanf("%d",&m[i][j]);
    }
  }
  int val[100] = {0};
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      if(m[i][j] == 1) {
        count = 1;
        m[i][j] = ctr;
        numberOfOnes(n,m,i,j);
        val[ctr] = count;
        ctr++;
      }
    }
  }
  int max=0;
  for(int i=0; i<100; i++) {
    if(val[max] < val[i])
      max = i;
  }
  printf("\n");
  printf("Max- %d\n",val[max]);
  return 0;
}
