
	/*
	 ============================================================================
	 Name        : uva 11360 having fun with matrix
	 Author      : kazal chandra barman
	 Version     : 1.01
	 Copyright   :  copirighted  by @ kazal chandra barman
	 Description :Aim: - To perform the following operation in Matrix

	 ============================================================================
	 */

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  //  freopen("input.text","r",stdin);
    int T, N, m, a, b, matrix[10][10], temp[10], total = 0;
    char op[30], num;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &N);
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                scanf(" %c", &num);
                matrix[i][j] = num-'0';
            }
        }
        scanf("%d", &m);
        while(m--)
        {
            scanf("%s", op);
            switch(op[0])
            {
            case 'r':
                scanf("%d%d", &a, &b);
                for(int i = 0; i < N; i++)
                {
                    temp[i] = matrix[a-1][i];
                    matrix[a-1][i] = matrix[b-1][i];
                    matrix[b-1][i] = temp[i];
                }
                break;
            case 'c':
                scanf("%d%d", &a, &b);
                for(int i = 0; i < N; i++)
                {
                    temp[i] = matrix[i][a-1];
                    matrix[i][a-1] = matrix[i][b-1];
                    matrix[i][b-1] = temp[i];
                }
                break;
            case 'i':
                for(int i = 0; i < N; i++)
                    for(int j = 0; j < N; j++)
                        matrix[i][j] = (matrix[i][j]+1)%10;
                break;
            case 'd':
                for(int i = 0; i < N; i++)
                    for(int j = 0; j < N; j++)
                        matrix[i][j] = (matrix[i][j]+9)%10;
                break;
            case 't':
                int tmp[10][10];
                for(int i = 0; i < N; i++)
                    for(int j = 0; j < N; j++)
                        tmp[i][j] = matrix[i][j];
                for(int i = 0; i < N; i++)
                    for(int j = 0; j < N; j++)
                        matrix[i][j] = tmp[j][i];
                break;
            }
        }
        printf("Case #%d\n", ++total);
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
                printf("%d", matrix[i][j]);
            puts("");
        }
        puts("");
    }
    return 0;
}

