#include<cstdio>
using namespace std;

int main()
{
    long long int t,a,b,c,n ,sum, i,j ;

    while(scanf("%lld",&t)==1)
    {

    	for(i=0; i<t; i++)
        {
            sum = 0;
            scanf("%lld",&n);

        for(j=0; j<n; j++)
        {

            scanf("%lld%lld%lld",&a,&b,&c);
            sum+=a*c;

        }


        printf("%lld\n",sum);

    }
}
return 0;
}

