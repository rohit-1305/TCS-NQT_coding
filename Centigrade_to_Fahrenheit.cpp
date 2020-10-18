#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    float celcius, fahrenheit;
    cin >> celcius;
    printf("%0.2f", (celcius * 1.8000 + 32));
    return 0;
}