#include<stdio.h>
#include<math.h>
int main()
{

	freopen("input.txt","r+", stdin);

	int a,b,c,t;

	scanf("%d",&t);
	while(t--){

	scanf("%d %d %d",&a,&b,&c);

        if(a+b >c && b+c >a && c+a >b ){

            printf("OK\n");
        }
    else
        printf("Wrong!!\n");

        }
	return 0;
}
