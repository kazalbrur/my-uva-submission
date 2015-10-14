#include<cstdio>
using namespace std;

int main()
{

freopen("input.txt","r+",stdin);
    int t,n,k,p , c= 0 ;
    int calculate;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d %d %d",&n,&k,&p);

        calculate = k+p;
        while(calculate > n){

			calculate = calculate-n;

        }

        printf("Case %d: %d\n",++c,calculate);

    }

    return 0;
}

