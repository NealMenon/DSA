#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
bool compare(int x,int y)
{
    int len1,len2;
    for(int i=1;i<100;i++)
    {
        if(x<pow(10,i))
        {
            len1=pow(10,i);
            break;
        }
    }
    for(int i=1;i<100;i++)
    {
        if(y<pow(10,i))
        {
            len2=pow(10,i);
            break;
        }
    }
    int xy=x*len2+y;
    int yx=y*len1+x;
    if(xy>yx)
    {
        return  false;
    }
    return true;
}
void printLargest(int a[],int n)
{
    int max;
    int pos;
    for(int i=0;i<n;i++)
    {
        max=a[i];
        for(int j=i+1;j<n;j++)
        {
            if(compare(max,a[j]))
            {
                max=a[j];
                pos=j;
            }
        }
        if(max!=a[i])
        {
            int temp=a[i];
            a[i]=a[pos];
            a[pos]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[]) {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printLargest(a,n);
    return 0;
}
