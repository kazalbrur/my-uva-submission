// uva 11614  Etruscan Warriors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<math.h>




int main()
{
	double s;
	long long n;
	int t;

	scanf("%d", &t);

		while (t--) {
			scanf("%lld", &s);

			n = (-1 + sqrt(1 + 8*s)) / 2;
			printf("%lld/n", n);


	}

	return 0;
}

