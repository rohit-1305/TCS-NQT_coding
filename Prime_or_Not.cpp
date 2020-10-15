#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int number, i;

    cin >> number;

    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {

            break;
        }
    }
    if (number == i)
    {
        float root = 0.001;
        while (root * root <= number)
        {
            root += 0.001;
        }

        printf("%0.2f", root);
    }
    else
    {
        cout << "0.00";
    }

    return 0;
}