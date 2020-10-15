#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int number;
    float i = 0.00;
    cin >> number;
    while (i * i <= number)
    {
        i += 0.001;
    }
    i = i - 0.001;
    printf("%0.2f", i);
    return 0;
}