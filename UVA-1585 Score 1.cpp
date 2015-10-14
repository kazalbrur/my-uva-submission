#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {

    freopen("input.txt","r+",stdin);

    int t;
    int result, temp;
    string input;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> input;
        result = 0;
        temp = 0;
        for (int j = 0; j < input.length(); j++)
        {
            result = result + temp;
            if (input[j] == 'O')
                temp ++;
            else
                temp = 0;
        }
        result = result + temp;
        cout << result << "\n";
    }
}

