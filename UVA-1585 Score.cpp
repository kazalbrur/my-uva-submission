#include<stdio.h>
#include<string.h>
#define MAX 100
int main()
{

    char ch[MAX];
    int i,j,cou,arr[MAX],len,k,test;

    scanf("%d",&test);

    while(test--)
    {
        scanf("%s",ch);
        len=strlen(ch);
        cou=0;
        k=0;
        for(i=0; i<len; i++)
        {
            if(ch[i]=='O')
            {
                cou++;

                arr[i]=cou;


            }
            if(ch[i]=='X')
            {
                cou=0;
                arr[i]=cou;
            }
        }
        long sum=0;
        for(i=0; i<len; i++)
        {
            sum+=arr[i];
        }
        printf("%ld\n",sum);
        memset(arr,0,sizeof(arr));
    }
}
