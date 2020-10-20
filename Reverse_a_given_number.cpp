#include <iostream>
using namespace std;
int main()
{
    long int number;
    int remainder, reverse = 0;
    cin >> number;
    while (number != 0)
    {
        remainder = number % 10;
        reverse = (reverse * 10) + remainder;
        number = number / 10;
    }
    cout << reverse;
}