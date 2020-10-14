#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int diameter;
    cin >> diameter;
    int radius = diameter / 2;
    double area = radius * radius * 3.14;
    printf("%0.2f", area);
}