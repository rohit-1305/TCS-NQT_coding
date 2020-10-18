#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int index = 0;
    string str2 = "";
    int len = str.length();

    for (int i = 0; i < len; i++)
    {
        str2.insert(0, to_string(str[i] - 48));
    }

    if (str == str2)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not a Palindrome";
    }
    return 0;
}