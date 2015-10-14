#include<stdio.h>
#include<string.h>
const char keyboard[]= "'1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
int main(){
freopen("input.txt","r",stdin);
    char c;
    int i;
    while(scanf("%c",&c) != EOF)
    {
     c=tolower(c);
     if(isspace(c))

printf("%c",c);
else
  {
 for(i=0;keyboard[i];++i)
 if(c==keyboard[i]){
   printf("&c",keyboard[i-2]);
   break;
 }
}
    }

    }

