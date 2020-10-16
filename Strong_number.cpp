#include <iostream>
using namespace std;
int factorial(int digit)
{
    int j, fact = 1;
    for (j = 1; j <= digit; j++)
    {
        fact = fact * j;
    }
    return fact;
}
int main()
{
    int number, len, total = 0, digit;
    cin >> number;
    int num = number;
    len = to_string(number).length();
    for (int i = 0; i < len; i++)
    {
        digit = number % 10;
        total = total + factorial(digit);
        number = number / 10;
    }
    if (total == num)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}
