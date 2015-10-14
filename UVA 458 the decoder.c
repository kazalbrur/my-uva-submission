#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	freopen("input.txt","r",stdin);
    char a[200];
    char c;
    int i,len;
	while(gets(a)){
           len = strlen(a);
		for(i=0;i<len;i++)
		{
             printf("%c",a[i]-7);
             }
         printf("\n") ;		}
	 return 0;
}
