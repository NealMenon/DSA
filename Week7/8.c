#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

bool adjacent_one(int x)
{
    for(int i=1;x/10!=0;i++)
    {
        int a = x%10;
        x/=10;
        int b=x%10;
        if(abs(a-b)!=1)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[]) {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(i<=10)
        {
            printf("%d ",i);
        }
        else if(adjacent_one(i))
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
