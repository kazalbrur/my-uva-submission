

#include<stdio.h>
#include<math.h>

 long H(int n){
int i;
long res = 0;
for(i = 1; i <= n;i++){
res = (res + n/i);
}
return res;
}


int main()
{

long n,t;
	scanf("%ld", &t);

		while (t--) {

			scanf("%ld",&n);

                printf("%ld\n",H(n));

	}

	return 0;
}



