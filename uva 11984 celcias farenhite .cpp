#include<cstdio>
using namespace std;

int main()
{


    int t,c,f , i= 0 ;
    double calculate;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d %d",&c,&f);
        calculate = ((5.0/9.0) * f) + c;

        printf("Case %d: %.2f\n",++i,calculate);

    }

    return 0;
}

