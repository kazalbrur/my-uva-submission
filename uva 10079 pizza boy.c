#include<stdio.h>
int main()
{
    long long p,n;
    while(scanf("%lld",&n)==1){
        if(n<0)
            break;
        else if(n>=0 && n<=210000000)
            p = (n*(n+1))/2+1;
        printf("%lld\n",p);
    }

    return 0;
}
