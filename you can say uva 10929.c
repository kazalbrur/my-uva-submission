#include<stdio.h>
int main()
{
    int a;

    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        if(a%11==0)
            printf("%d is a multiple of 11.\n",a);
        else
            printf("%d is not a multiple of 11.",a);

    }


    return 0;
}

