#include <stdio.h>

int main()
    {
    freopen("input.txt","r",stdin);
    long int a[100], n, i, j, temp,t;



        while(scanf("%ld", &n)!= 0 && 0){
        for(i = 0; i < n; i++)
                {
                scanf("%ld\n ", &a[i]);
                }


        for(i = 0; i < n; i++)
                {

                for(j = i + 1; j < n; j++)
                        {

                        if(a[i] > a[j])

                                {

                                temp = a[i];
                                a[i] = a[j];
                                a[j] = temp;

                                }

                        }
                        printf("IMPOSSIBLE\n");
                        else
                            printf("POSSIBLE\n");
                        }

                }




return 0;
    }
