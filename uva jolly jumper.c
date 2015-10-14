/*
* Kazal Chandra  Barman
*
*/
#include<stdio.h>
                                                                    int main()
                {
                    int a[10][10],b[10][10],c[10][10],i,j,k,r1,r2,c1,c2;
                    printf("Enter rows n columns of matrix A ");
                    scanf("%d %d",&r1,&c1);
                    printf("Enter rows n columns of matrix B ");
                    scanf("%d %d",&r2,&c2);
                    /* If colum of first matrix in not equal to row of second matrix, asking user
                    to enter the size of matrix again. */
                    if(c1!=r2)
                    {
                        printf("Multiplication not possible");
                    }
                    /* Storing elements of first matrix. */
                    printf("Enter elements for matrix A\n");
                    for(i=0; i<r1; i++)
                    {
                        for(j=0; j<c1; j++)
                        {
                            scanf("%d",&a[i][j]);
                        }
                    }
                    /* Storing elements of second matrix. */
                    printf("Enter elements for matrix B\n");
                    for(i=0; i<r2; i++)
                    {
                        for(j=0; j<c2; j++)
                        {
                            scanf("%d",&b[i][j]);
                        }
                    }
                    /* Displaying the multiplication of two matrix. */
                    printf("Matrix multiplication is :\n");
                    for(i=0; i<r1; i++)
                    {
                        for(j=0; j<c2; j++)
                        {
                            c[i][j]=0;
                            for(k=0; k<c1; k++)
                            {
                                c[i][j]=c[i][j]+a[i][k]*b[k][j];
                            }
                        }
                    }
                    for(i=0; i<r1; i++)
                    {
                        for(j=0; j<c2; j++)
                        {
                            printf("%d ",c[i][j]);
                        }
                        printf("\n");
                    }
                }
