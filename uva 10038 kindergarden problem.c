 #include<stdio.h>
 #include<string.h>
    int main()
    {
    int count=0,i,j,len,c,t;
    char str[100];
    scanf("%d",&t);
    for(c=1;j<=t;c++){
     while(gets(str)){
     len=strlen(str);

        for(i=0;i<=len;i++)
        {
           if(str[i]==' ')
              count++;
        }
        printf("%d\n",count+1);

        return 0;

    }
    }}
