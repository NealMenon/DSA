#include <stdio.h>
#include <string.h>


int main(){
    char s[100];
    scanf("%s", &s);

    int count[26], j=0, max=0;
    for(int i=0; i<26; i++)
        count[i]=0;
    for(int i=0; i<strlen(s); i++)
        count[s[i]-95]++;

    for(int i=0; i<26; i++)
        if(count[i]>max)
            max=count[i];

    if(max<=strlen(s)-max+1)
        printf("Possible\n");
    else
        printf("Not possible\n");
    return 0;
}
