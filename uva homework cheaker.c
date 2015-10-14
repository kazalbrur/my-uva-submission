#include<stdio.h>
#include<string.h>
int main()
{
    freopen("input.txt","r",stdin);
    char ques[100],sign;
    int a,b,s,res,i,r,c,ca=0;
    while(gets(ques))
    {
        if(sscanf(ques,"%d%c%d=%d",&a,&sign,&b,&res)!=4)
            continue;
        switch(sign)
        {
        case '+':
            r=a+b;
            break;
        case '-':
            r=a-b;
            break;
        }
        if(r==res)
            ca++ ;
    }
    printf("%d\n",ca);

    return 0;
}
