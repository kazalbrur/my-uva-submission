#include<stdio.h>
#include<string.h>

# include<stack>
using namespace std;
bool isOpeningParenthesis(char ch)
    {
    if(ch=='(' ||ch=='[' ||ch=='{')
        return true;
    else
        return false;
    }
char getOpeningParenthesis(char ch)
    {
    if(ch==')')
        return '(';
    else if(ch=='}')
        return '{';
    else

        return '[';
    }
int main()
    {
    freopen("input.txt","r",stdin);
    int n,i,len;
    char line[130];
    stack <char> s;
    bool valid;
    scanf("%d\n",&n);
    while (n--)
            {
            gets(line);
            valid = true;
            len= strlen(line);
            for(i=0; i<len; i++)
                    {
                    if(isOpeningParenthesis(line[i]))
                        s.push(line[i]);
                    else if( s.empty()||(getOpeningParenthesis(line[i])!=s.top()))
                            {
                            valid= false;
                            break;
                            }
                    else if(getOpeningParenthesis(line [i])==s.top())
                        s.pop();

                    }
            if (valid)
                    {
                    if(!s.empty())
                            {
                            valid=false;
                            break;
                            }
                    }
            if(valid)
                printf("Yes\n");
            else
                    {
                    printf("No\n");
                    while(!s.empty())
                        s.pop();
                    }
            }
    return 0;
    }
