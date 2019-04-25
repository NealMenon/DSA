#include<stdio.h>
#include<string.h>

int main() {
    int n,max=0;
    scanf(" %d",&n);
    char str[n][15];
    for(int i=0;i<n;i++) {
        scanf("%s",str[i]);
        if(max<strlen(str[i])) max = strlen(str[i]);
    }
    char ans[n][max];
    for(int j=0;j<n;j++) { for(int i=0;i<max;i++) ans[j][i]=0; } 
    int cnt=0,a;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i!=j) {
                a = 0;
                while(str[i][a]==str[j][a]) {  { ans[i][a]=str[i][a];} a=a+1; }
                ans[i][a]=str[i][a];
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<max;j++) {
            if(ans[i][j]==0) break;
            printf("%c",ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}