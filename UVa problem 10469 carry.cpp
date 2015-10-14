#include<stdio.h>

int main(){
char line [100];
int i,j;

 while(fgets(line,100,stdin)) //
 {
 sscanf(line,"%d %d",&i,&j) ;
 printf("%d\n",i^j);
 }
 return 0;
}
