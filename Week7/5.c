#include<stdio.h>
#include<limits.h>
#define cin(x)  scanf("%d",&x)
#define R(i,a,n)    for(int i=a;i<n;i++)

void floyd(int n, int A[n][n], int s, int t)  {
    
    int cpy[n][n];
    R(i,0,n)
        R(j,0,n)
            cpy[i][j]  = A[i][j];
    
    R(k,0,n)
        R(i,0,n)
            R(j,0,n)
                if(cpy[i][k]!=INT_MAX && cpy[k][j]!=INT_MAX && cpy[i][k]+cpy[k][j]<cpy[i][j])
                    cpy[i][j] = cpy[i][k]+cpy[k][j];
    
    R(i,0,n)
        cpy[i][i] =0;
        
    int count =0;
    R(i,0,n)    
        R(j,i+1,n)
            if(cpy[i][j]!=1)   
                if(cpy[s][i]+1+cpy[j][t]>=cpy[s][t] && cpy[s][j]+1+cpy[i][t]>=cpy[s][t])  
                    count++;
                
    printf("%d\n",count);
}

int main()  {
    
    int n,m,s,t;
    cin(n),cin(m),cin(s),cin(t);
    
    int A[n][n];
    R(i,0,n)
        R(j,0,n)
            A[i][j] = INT_MAX;
        
    int a,b;
    R(i,0,m)
        cin(a),cin(b),A[a-1][b-1] = 1, A[b-1][a-1] =1;
        
    floyd(n,A,s-1,t-1);
    return 0;
}