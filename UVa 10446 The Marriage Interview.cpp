#include<cstdio>
using namespace std;

typedef unsigned __int64 datatype;
datatype count;
datatype trib(int n, unsigned int back)
{
    datatype sum=0;
    int i;
    count++;
    if(n<=0)
		return 0;
    if(n==1)
     return 1;
    for(i=1; i<=back; i++)

        sum+=trib(n-i,back);

    return sum;
}
int main()
{
    int n, back, Case=1;
    while (scanf("%d%d",&n,&back)){
        if (n > 60) break;
        printf("Case %d: %llu\n",Case++,trib(n,back));

    }
    return 0;
}
