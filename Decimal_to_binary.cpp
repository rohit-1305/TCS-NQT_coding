#include <iostream>
using namespace std;
int main()
{

    int number, binary;
    cin >> number;
    string result = "";
    while (number >= 1)
    {
        binary = number % 2;
        result.insert(0, to_string(binary));
        number = number / 2;
    }
    cout << result << endl;
}