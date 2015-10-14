#include<stdio.h>

int GCD(int i ,int j)
    {
    int c;
    while(i!=0)
            {
            c=j%i;
            j =i ;
            i=c;
            }
    return (j);
    }

int main()
    {
    int i,j,N;
    while(scanf("%d",&N) && N!=0)
            {
            long lm  =0;


            for(i=1; i<N; i++)

                for(j=i+1; j<=N; j++)

                        {

                        lm+= (i*j)/GCD(i,j);


                        }
                printf("%ld\n",lm);
            }
         return (0);
    }
