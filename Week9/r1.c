 #include<stdio.h>
int tim = 0;
int sum = 0;

int visited(int et[], int n) {
  for(int i=0; i<n; i++) {
    if(et[i] != 0)
      return 0;
  }
  return 1;
}

void timeCal(int at[],int exeTime[], int et[], int n, int t) {
    for(int i=0; i<n; i++) {
        if(at[i] <= tim && et[i] > 0) {
            if(et[i] < t) {
                tim += et[i];
                et[i] = 0;
            } else {
                tim += t;
                et[i] -= t;
            }
            if(et[i] == 0) {
                sum += tim - exeTime[i];
            }
        }
    }
    if(visited(et,n) == 0) {
        timeCal(at,exeTime,et,n,t);
    }
}

int main() {
    int n,t;
    scanf("%d",&n);
    scanf("%d",&t);
    int arrTime[n], exeTime[n];
    for(int i=0; i<n; i++) {
        scanf("%d %d",&arrTime[i],&exeTime[i]);
    }
    for(int i=0; i<n; i++) {
        int small = i;
        for(int j=i; j<n; j++) {
            if(exeTime[j] < exeTime[small]) {
                small = j;
            }
        }
        int test = exeTime[i];
        exeTime[i] = exeTime[small];
        exeTime[small] = test;
        test = arrTime[i];
        arrTime[i] = arrTime[small];
        arrTime[small] = test;
    }

    int et[n];
    for(int i=0; i<n; i++) {
        et[i] = exeTime[i];
    }
    timeCal(arrTime,exeTime,et,n,t);
    float av;
    av = (float)sum/n;
    printf("%.1f\n",av);
    return 0;
}
