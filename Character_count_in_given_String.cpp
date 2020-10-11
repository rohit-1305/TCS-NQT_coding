#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    string letters;
    int count = 1, i;
    cin >> letters;
    int length = letters.length();
    if (length > 20)
    {
        cout << "Invalid Input";
        return 0;
    }
    else
    {
        for (i = 1; i <= length; i++)
        {
            if (letters[i] == letters[i - 1])
            {
                count++;
            }
            else
            {
                cout << letters[i - 1] << count;
                count = 1;
            }
        }
    }
    // note
    return 0;
}
