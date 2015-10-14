#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include<math.h>


int main()
{
	int a, b, c,i,d;

    while(scanf("%d %d", &a,&b) ==2 && a!=0 && b!=0){

		d=0;
        for(i=a;i<=b;i++)
        {
           c=sqrt(i);
           if(i==c*c)
           d++;
        }
        printf("%d\n", d);
    }
return 0;
}
