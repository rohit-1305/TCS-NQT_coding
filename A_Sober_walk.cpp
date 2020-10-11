#include <iostream>
using namespace std;
int main()
{
    int n, x = 0, y = 0;
    char c = 'R';
    cin >> n;
    while (n)
    {
        switch (c)
        {
        case 'R':
            x = abs(x) + 10;
            y = abs(y);
            c = 'U';
            break;
        case 'U':
            y = y + 20;
            c = 'L';
            break;
        case 'L':
            x = -(x + 10);
            c = 'D';
            break;
        case 'D':
            y = -y;
            c = 'R';
            break;
        }
        n--;
    }
    cout << x << " " << y;
}