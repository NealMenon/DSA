#include <stdio.h>
int main() {
    char st[30], ch;
    int len = 0;
    printf("Enter the word (all in lowercase): ");
    while(ch != '\n') {
        scanf("%c", &ch);
        if(ch == '\n')
            break;
        else 
            if(ch > 119) ch = ch-26;
            st[len++] = ch+3;
    }
    printf("Caeser: ");
    printf("%s\n", st);
    return 0;
}