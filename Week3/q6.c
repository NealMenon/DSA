#include <stdio.h>

int main() {
    
    
    char st[20], ch;
    int freq[26], len = 0;
    
    for(int i = 0; i < 26; i++) freq[i] = 0;
    printf("Enter the word (all in lowercase): ");
    while(ch != '\n') {
        scanf("%c", &ch);
        if(ch == '\n')
            break;
        else 
            st[len++] = ch;
        freq[(int)ch-97]++;
    }
    //scanf("%s",s);
    //printf("%s is the string and length is %d\n", st, len);
    int odd = 0;
    for(int i = 0; i < 26; i++){
        //printf("%c -> %d\n", (char)i+97, freq[i]);
        if(freq[i] % 2 != 0) odd++;
        if (odd > 1) {
            printf("No\n");
            return 0;
        }
        
    }
    
    printf("Yes\n");
    return 0;
}