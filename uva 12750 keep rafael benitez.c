#include <stdio.h>

int main()
{

    int testCase;
    while(scanf("%d", &testCase) != EOF)
    {

        int counter;
        for(counter=1; counter<=testCase; counter++)
        {
            int y;
            scanf("%d", &y); // This is not OK :p

            int i, sec=1, job_lost=0;
            for(i=0; i<y; i++)
            {
                if(sec==3)
                {
                    job_lost=1;
                    break;
                }
                char in_result;
                scanf("%c", &in_result);
                if(in_result == 'W')
                {
                    sec=1;
                }
                else
                {
                    sec++;
                }
            }
            if(job_lost==0)
                printf("Case %d: Yay! Mighty Rafa persists!\n", counter);
            else
                printf("Case %d: %d\n", counter, i+1);
        }
    }
    return 0;
}
