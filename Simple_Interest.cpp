#include <iostream>

using namespace std;
int main()
{
    float principle, rate, year;
    cin >> principle >> year >> rate;
    float SI = ((principle * rate * year) / 100);
    printf("%0.6f",SI);
    return 0;
}