#include<stdio.h>
int main()
    {
    unsigned long int a,b,count,c;

    while(scanf("%lu %lu",&a,&b)&&a!=0&&b!=0)
            {
            count=c=0;
            while(a||b)
                    {
                    c=(a%10+b%10+c)/10;
                    a=a/10;
                    b=b/10;
                    count=count+c;
                    }
            if(count==0)
                printf("No carry operation.\n");
            else if(count==1)
                printf("1 carry operation.\n");
            else
                printf("%lu carry operations.\n",count);
            }
    return 0;
    }
