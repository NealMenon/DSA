#include <stdio.h>

int max = 0;

void valid(int in[15][2], cat[15], int n, int max, int cur){
    if(cat[cur]){
        //currently at cat
        valid
    }
}



int main() {
    
    int n, maxcats, cat[15], in[15][2];
    
    printf("Enter the number of leaves in tree: ");
    scanf("%d", &n);
    
    printf("Enter the max number of cats that can be consecutively encountered: ");
    scanf("%d", &maxcats);
    
    printf("Enter array describing whether the leaf has a cat: \n");
    for(int i = 0; i < n; i++)
        scanf("%d", &cat[i]);
    
    
    printf("Enter array connections: \n");
    for(int i = 0; i < n-1; i++) {
        scanf("%d %d", &in[i][0], &in[i][1]);
        in[i][0]--;
        in[i][1]--;
    }
    
    valid(in, cat, n, maxcats, 0);
    
    printf("Max leaves visitable = %d\n", max);
    
    
    
    
    
    return 0;
}