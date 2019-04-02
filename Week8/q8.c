#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int a[n][n];
  for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
      scanf("%d", &a[i][j]);
  int c=0;

  for(int l=1; l<=n; l++){
      for(int h=1; h<=n; h++){

          int sub[l][h];
          for(int i=0; i<=n-l; i++){
              for(int j=0; j<=n-h; j++){
                  for(int k=i; k<i+l; k++){
                      for(int g=j; g<j+h; g++){
                          sub[k-i][g-j]=a[k][g];
                      }
                  }

                  int count=0;
                  for(int y=0; y<l; y++){
                      for(int x=0; x<h; x++){
                          if(sub[y][x]==1)
                              count++;
                      }
                  }
                  if(count==1)
                  c++;
              }
          }
      }
  }
  printf("%d", c);
  return 0;
}
