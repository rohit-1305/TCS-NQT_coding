#include <iostream>
using namespace std;
int main()
{
    int i, t1 = 0, t2 = 1, t3, number;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        if (i == 1)
        {
            t3 = t1;
        }
        else if (i == 2)
        {
            t3 = t2;
        }
        else
        {

            t3 = t1 + t2;
            t1 = t2;
            t2 = t3;
        }
    }
    cout << t3;
    return 0;
}