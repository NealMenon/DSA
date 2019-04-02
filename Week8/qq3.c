#include <stdio.h>
int main() {
    int ns = 0, nc = 0, nsq = 0, len = 0;
    char ch, str[500];
    printf("Enter string: \n");
    while(ch != '\n') {
        scanf("%c", &ch);
        if(ch == '\n')
            break;
        else
            str[len++] = ch;
    }
    for(int i = 0; i < len; i++) {
        ch = str[i];
        if(ch == '(')
            ns++;
        else if (ch == '{')
            nc++;
        else if (ch == '[')
            nsq++;
        else if (ch == ')')
            ns--;
        else if (ch == '}')
            nc--;
        else if (ch == ']')
            nsq--;
        if (ns < 0 || nc < 0 || nsq < 0 ) {
            printf("Invalid\n");
            return 0;
        }
    }
    printf("Valid\n");
    return 0;
}

//[()]{}{fsd[()sdf()sfd](asdf)}
