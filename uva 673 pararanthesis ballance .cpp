#include<stdio.h>
#include<string.h>

# include<stack>
using namespace std;
int n;
char input[130];

bool check(char input[1300])
    {
    stack<char> balance;
    for(int i = 0; i < strlen(input); i++)
            {
            if(input[i] == '(' || input[i] == '[')
                    {
                    balance.push(input[i]);
                    }
            else
                    {
                    if(balance.size() == 0) return false;
                    if((input[i] == ')' && balance.top() == '(') ||
                            (input[i] == ']' && balance.top() == '['))
                        balance.pop();
                    else return false;
                    }
            }
    return balance.size() == 0;
    }

int main()
    {

freopen("input.txt","r",stdin);
    scanf("%d\n", &n);
    while(n--)
            {
            gets(input);
            printf("%s\n", check(input)? "Yes" : "No");
            }
    }
