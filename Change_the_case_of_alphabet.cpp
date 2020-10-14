#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char letter;
    cin >> letter;
    if ('a' >= letter && letter <= 'z')
    {
        printf("%c", letter - 32);
    }
    else if ('A' >= letter && letter <= 'Z')
    {
        printf("%c", letter + 32);
    }
    return 0;
}