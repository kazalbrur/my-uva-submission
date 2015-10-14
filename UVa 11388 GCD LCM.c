#include<stdio.h>

int main()
    {
    int t,gcd,lcm;
    scanf("%d",&t);
    while(t--)
            {
            scanf("%d %d", &gcd,&lcm);
            if(lcm%gcd==0)
                printf("%d %d\n", gcd , lcm);
            else
                printf("-1\n");

            }
         return 0;
    }
