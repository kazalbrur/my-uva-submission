#include<stdio.h>
char a[1000];
int i;
int main()
{
	freopen("input.txt","r",stdin);

	gets(a);

		for(i=0;a[i];i++)
		{

			a[i]=a[i]-7;
		}
		puts(a);
	 return 0;
}
