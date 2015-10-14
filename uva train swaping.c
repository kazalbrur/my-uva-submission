#include <stdio.h>

int main()
    {
      freopen("input.txt","r",stdin);
    long int a[20], n, i, j, temp,t;
    scanf("%ld",&t);
    while(t--)
            {

            scanf("%ld", &n);
            for(i = 0; i < n; i++)
                    {
                    scanf("%ld ", &a[i]);
                    }
            long int count = 0;
            for(i = 0; i < n; i++)
                    {

                    for(j = i + 1; j < n; j++)
                            {

                            if(a[i] > a[j])

                                    {

                                    temp = a[i];
                                    a[i] = a[j];
                                    a[j] = temp;
                                    count++;

                                    }


                            }

                    }

            printf("Optimal train swapping takes %ld swaps.\n",count);
            }
    return 0;
    }
