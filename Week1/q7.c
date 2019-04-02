#include <stdio.h>
#include <string.h>



int len(char s[50]) {
    /*int i = 0;
    while(s[i] != '\0')
        i++;
    return --i;*/
    
    return strlen(s) - 1;
}

void revString(char s[],int start,int end) {
  char ch;
  int j=end,mid;
  mid = end-start;
  if(mid%2==0)
    mid = mid/2;
  else
    mid = (mid+1)/2;
  for(int i=start; i<(start+mid); i++) {
    ch = s[i];
    s[i] = s[j];
    s[j] = ch;
    j--;
  }
}

int main() {
    int len = 50, en = 0;
    char str[len];
    
    printf("Enter 0 to encode and 1 for decode: ");
    scanf("%d", &en);
    getchar();
    fgets(str, len, stdin);
    //str[strlen(str)] = '\0';
    
    if(!en) {
        printf("***ENCODING***\n");
        printf("Before: %s\n", str);
    
        
        for (int i = 0, flag = 0; i < strlen(str); i++){
            if(str[i] == ' '){
                i++;
                flag = !flag;
                continue;
            }
            if(i % 2 == flag){
                flag = 0;
                if((str[i] >= 88 && str[i] < 97) || (str[i] >= 120)) {
                str[i] = (char) str[i] - 26;
                } 
                str[i] = (char) str[i] + 3;
            } 
        }
        
        printf(" %s \n", str);
    } else {
        for (int i = 0, flag = 0; i < strlen(str); i++){
            if(str[i] == ' '){
                i++;
                flag = !flag;
                continue;
            }
            if(i % 2 == flag){
                flag = 0;
                if((str[i] > 90 && str[i] <= 99) || (str[i] < 68)) {
                str[i] = (char) str[i] + 26;
                } 
                str[i] = (char) str[i] - 3;
            } 
        }
        printf(" %s \n", str);
    }
    
    
    
    return 0;
}