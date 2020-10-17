#include <iostream>
using namespace std;
int main()
{
    int i, range1, range2, sum = 0;
    cin >> range1 >> range2;
    range1 = range1 + 1;
    if (range1 > 0 && range2 > 0)
    {
        for (int number = range1; number <= range2; number++)
        {
            for (i = 2; i <= number; i++)
            {
                if (number % i == 0)
                {
                    break;
                }
            }
            if (number == i)
            {
                sum = sum + i;
            }
        }
    }
    cout << sum;
}