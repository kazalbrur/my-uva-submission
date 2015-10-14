#include<iostream>
#include<cstdio>
#include<math.h>

#define PI acos(-1.0)

using namespace std;


double volume[10010];
int n;
int friends(double mid){
int count = 0;
for(int i=0;i<n ; i++ )
	count = count + (int)(volume[i]/mid) ;
return count;

}

int main(){

int a,b,c,tc,w,x,y,z,m,u,v,cnt,mx,mn,p,q,r,sum;
	 cin>>tc;
    while(tc--)
    {
        cin>>n>>m;
        m++;
        for(int i=0;i<n;i++)
        {
            cin>>volume[i];
            volume[i]=(volume[i]*volume[i]*PI);
        }

        //binary search
        double hi=1e9,lo=0.0,md;
        for(int i=0;i<100;i++)
        {
            md=(hi+lo)/2.0;
            if(friends(md)>=m)
                lo=md;
            else hi=md;
        }

        printf("%.6lf\n",md);

    }
    return 0;
}


