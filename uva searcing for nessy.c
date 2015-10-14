/**********************************************************
*  Status:
*  Problem: uva searcing for nessy
*  Author:  Kazal Chandra Barman,
*           Department of Computer Sciemce and Engineering,
*           Begum Rokeya University, Rangpur, Bangladesh
*  Created on:
***********************************************************/



#include<stdio.h>
#include<string.h>

int main()
{
    int t,m,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&n);
        printf("%d\n",(m/3)*(n/3));
    }
    return 0;

}
