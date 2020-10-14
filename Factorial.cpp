#include <iostream>
using namespace std;
int main()
{
    int n;
    long int factorial = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    cout << factorial;
}