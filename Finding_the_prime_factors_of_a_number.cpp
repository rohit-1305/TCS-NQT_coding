#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int number, i;
    cin >> number;
    while (number % 2 == 0)
    {
        cout << 2 << " ";
        number = number / 2;
    }
    for (i = 3; i < number / 2; i++)
    {
        if (number % i == 0)
        {
            cout << i << " ";
            number = number / i;
        }
    }
    if(number>2){
        cout<<number<<" ";
    }
    return 0;
}