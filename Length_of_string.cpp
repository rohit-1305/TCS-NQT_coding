#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;
int main()
{
    char a[50];
    int i, len = 0;
    scanf("%[^\n]s", a);
    for (i = 0; a[i] != '\0'; i++)
    {
        len++;
    }
    cout << len;
}