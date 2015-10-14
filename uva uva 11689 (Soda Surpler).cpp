#include<stdio.h>
#include<math.h>
int main()
{

	freopen("input.txt","r+", stdin);

	int possession,statring,required,t,total,sum;

	scanf("%d",&t);
	while(t--){

	scanf("%d %d %d",&possession,&statring,&required);

	total = possession+statring;
	sum =0;

	while(total >=required){

        total = total -required+1;
        sum ++;


	}

    printf("%d\n",sum);

        }
	return 0;
}
