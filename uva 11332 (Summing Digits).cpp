#include <stdio.h>
int main()
{
    unsigned long long int input,temp;
    while (scanf("%llu",&input)==1 && input!=0)
    {
        while(input>=10)
        {
            temp=0;
            if(input>=10)
            {
                temp+=(input%10);
                input=input/10;
            }
            temp+=input;
            input=temp;


        }
        printf("%llu\n",input);
    }

    return 0;
}
