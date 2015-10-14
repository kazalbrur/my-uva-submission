#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum,i;

	while(scanf("%d", &n) ==1){

        if(n >= 1 && n <= 200){

         sum = 0;
         for(i=1;i<=n;i++){

             if((i%2) != 0){
                    sum = 1+sum;
             }
               else if((i%2) == 0){
                    sum = 2+sum;
             }
         }
        }
            printf("%d\n",sum);

        }
	return 0;
}
