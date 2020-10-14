#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double side1, side2, hypo;
    cin >> side1 >> side2;
    hypo = sqrt(side1 * side1 + side2 * side2);
    printf("%0.2f", hypo);
}