#include<stdio.h>
#include<string.h>
int main()
    {
    char s[1000],c;
    int i;
    while(scanf("%s",s)!=EOF){
            c=getchar();
            for(i=strlen(s)-1; i>=0; i--)
                    {
                    printf("%c",s[i]);
                    }
            putchar(c);
            }
    return 0;
    }
