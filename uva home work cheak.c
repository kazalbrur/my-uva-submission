#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
//freopen("input.txt","r",stdin);
char str [100],sign;
int i,a,b,r,res,count=0;
while(gets(str))  {
if(sscanf(str,"%d%c%d=%d",&a,&sign,&b,&res)!=4){
continue;
}

  switch(sign){
  case '+' :
  r=a+b;
  break;
  case '-' :
  r=a-b;
  break;
  }
  if(r==res)
     count++;
  }
             printf("%d\n",count) ;

  return 0;


}
