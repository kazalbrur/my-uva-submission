#include<stdio.h>
#include<math.h>

#define PI 3.14159265

int main()
{
    int r,side;
    double agn,area,total;
    while(scanf("%d %d", &r, &side)!=EOF){
        agn=sin(2*PI/side);
        area=r*r*agn/2;
        total=area*side;
        printf("%.3lf\n", total);
    }
    return 0;
}
