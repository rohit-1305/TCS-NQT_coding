#include <iostream>
using namespace std;
int main()
{
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    int len1 = str1.length();
    for (int i = 0; i < len1; i++)
    {
        if ((str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' ||
             str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U'))
        {
            str1[i] = '$';
        }
    }
    int len2 = str2.length();
    for (int i = 0; i < len2; i++)
    {
        if ((str2[i] != 'a' && str2[i] != 'e' && str2[i] != 'i' && str2[i] != 'o' && str2[i] != 'u' &&
             str2[i] != 'A' && str2[i] != 'E' && str2[i] != 'I' && str2[i] != 'O' && str2[i] != 'U'))
        {
            str2[i] = '#';
        }
    }
    int len3 = str3.length();
    for (int i = 0; i < len3; i++)
    {
        if ((str3[i] >= 'a' && str3[i] <= 'z') && str3 == str3)
        {
            str3[i] = str3[i] - 32;
        }
    }

    cout << str1 << str2 << str3;
    return 0;
}
