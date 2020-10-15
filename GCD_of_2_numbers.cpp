#include <iostream>
using namespace std;
int main()
{
    int a, b, c, gdc = 1;
    cin >> a >> b;
    int max1 = max(a, b);
    for (int i = 1; i < max1; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gdc = i;
        }
    }
    cout << gdc;

    return 0;
}