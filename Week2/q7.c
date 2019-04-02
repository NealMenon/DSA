#include <stdio.h>



int n, m, in[15][2], go[15], ngo = 0, adj[15][15], has[15];



int exists(int a, int b) {
    for(int i = 0; i < n; i++){
        int p = in[i][0], q = in[i][1];
        if( (p == a && q == b) || (p == b && q == a) )
            return 1;
    }
    return 0;
}



int main() {
    
    go[ngo++] = 0;

    printf("Enter number of cities: ");
    scanf("%d ", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d %d ", &in[i][0], &in[i][1]);
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(exists(i, j))
                adj[i][j] = 1;
            else 
                adj[i][j] = 0;
        }
    }
    
    printf("Enter the number of cities with universities (M): ");
    scanf("%d", &m);
    for(int i = 0; i < n; i++) 
        has[i] = 0;
    for(int i = 0; i < m; i++) {
        int a;
        scanf("%d", &a);
        has[a] = 1;
    }
    
    
    for(int i = 0; i < ngo; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            if(adj[i][j] == 1) {
                if(has[j])
                    printf("Will go to univ in city %d\n", j);
                else 
                    go[ngo++] = j;
            }
        }
    }
    
    return 0;
}