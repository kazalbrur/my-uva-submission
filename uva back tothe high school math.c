#include<stdio.h>
#include<math.h>

int main()
    {
    int tcase,tc=1;
    double u,v,d,t1,t2,td;

    scanf("%d",&tcase) ;

    while(tcase--)
            {

            scanf("%lf%lf%lf",&d,&v,&u);
            if(v==0 || u == 0 || v>=u)
                    {
                    printf("Case %d: can't determine\n",tc++);
                    continue;

                    }

            t1 = d/u;
            t2 = d/sqrt((u*u -v*v));

            td = fabs(t2-t1);

            printf("Case %d: %.3lf\n",tc++,td) ;

            }
    return 0;
    }
