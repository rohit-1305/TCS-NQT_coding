#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long int number, len;
    int digit, octal, decimal = 0;
    cin >> number;
    len = to_string(number).length();
    for (int i = 0; i < len; i++)
    {
        digit = number % 10;
        decimal += digit * pow(2, i);
        number = number / 10;
    }
    int remainder = decimal % 8;
    int quotient = decimal / 8;
    octal = quotient * 10 + remainder;
    cout << octal;
}
/* NOTE: incompelete*/