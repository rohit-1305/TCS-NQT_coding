#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long int number, len;
    int digit, decimal = 0;
    cin >> number;
    len = to_string(number).length();
    for (int i = 0; i <= len; i++)
    {
        digit = number % 10;
        cout << "digit : " << digit << endl;

        decimal += digit * pow(2, i);
        cout << "decimal : " << decimal << endl;
        number = number / 10;
    }
    cout << octal;
}
/* NOTE: incompelete*/