#include <iostream>
#include <string>
using namespace std;

int main() {

    int t; // Number of test cases
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
Share this:
