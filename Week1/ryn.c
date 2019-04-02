#include<stdio.h>
#include<string.h>
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
void encode(char s[],int ctr) {
  int count = 0, last = 0;
  for(int i=0; i<ctr; i++) {
    if(s[i]!=' ') {
      count++;
      if(count%2!=0)
        s[i] += 3;
    }
  } printf("%s\n",s);
  for(int i=0; i<ctr; i++) {
    if(s[i]==' ') {
      revString(s,last,i-1);
      last = i+1;
    }
  } revString(s,last,ctr-1);
  printf("%s\n",s);
}
void decode(char s[],int ctr) {
  int count = 0, last = 0;
  for(int i=0; i<ctr; i++) {
    if(s[i]==' ') {
      revString(s,last,i-1);
      last = i+1;
    }
  } revString(s,last,ctr-1);
  printf("%s\n",s);
  for(int i=0; i<ctr; i++) {
    if(s[i]!=' ') {
      count++;
      if(count%2!=0)
        s[i] -= 3;
    }
  } printf("%s\n",s);
}
int main() {
  char s[1000];
  int ctr = 0,choice;
  scanf("%[^\t\n]s",s);
  ctr = strlen(s);
  printf("1)Encode 2)Decode\n");
  scanf("%d",&choice);
  if(choice == 1)
    encode(s,ctr);
  else
    decode(s,ctr);
  return 0;
}