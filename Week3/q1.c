#include <stdio.h>

int main() {
    
    
    char t[20], p[20], ch;
    int ft[26], fp[26], lent = 0, lenp = 0, a[20];
    
    for(int i = 0; i < 26; i++) ft[i] = 0;
    for(int i = 0; i < 26; i++) fp[i] = 0;
    
    printf("Enter the t (all in lowercase): ");
    while(ch != '\n') {
        scanf("%c", &ch);
        if(ch == '\n')
            break;
        else 
            t[lent++] = ch;
        ft[(int)ch-97]++;
    }
    
    ch = ' ';
    printf("Enter the p (all in lowercase): ");
    while(ch != '\n') {
        scanf("%c", &ch);
        if(ch == '\n')
            break;
        else 
            p[lenp++] = ch;
        fp[(int)ch-97]++;
    }
    printf("%s is t and length is %d\n", t, lent);
    printf("%s is p and length is %d\n", p, lenp);
    
    printf("Enter length of array a: ");
    int len;
    scanf("%d", &len);
    
    printf("Enter the array a: ");
    for (int i = 0; i < len-1; i++) {
        scanf("%d ", &a[i]);
    }
    
    for(int i = 0; i < lent; i++) {
        ch = t[a[i]];
        if(ft[ch-97] -1 < fp[ch-97]){
            printf("Operations: %d\n", i);
            return 0;
        } else {
            ft[ch-97]--;
        }
    }
    
    
    return 0;
}