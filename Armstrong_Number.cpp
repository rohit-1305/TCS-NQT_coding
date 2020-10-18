#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int number, len, i, digit, sum = 0, answer;
    cin >> number;
    int ans = number; 
    len = to_string(number).length();
    for (i = 0; i < len; i++)
    {
        digit = number % 10;
        answer = pow(digit, len);
        sum = sum + answer;
        number = number / 10;
    }
    cout << "sum : " << sum << endl;
    if (sum == ans)
    {
        cout << "ARMSTRONG";
    }
    else
    {
        cout << "NOT AN ARMSTRONG";
    }
    return 0;
}