#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
    char str[17];
    // taking hex from user
    cin >> str;
    long long decimal;
    decimal = 0;
    int i = 0, val, len;
    // finding length of the strinf
    len = strlen(str);
    //reducing the length
    len--;
    for(i=0; str[i] != '\0';i++){
        if(str[i] >= '0' && str[i] <= '9'){
            val = str[i] - 48;
        }
        else if(str[i] >= 'a' && str[i] <= 'g'){
            val = str[i] - 97 + 10;
        }
        else if (str[i] >= 'A' && str[i] <= 'G')
        {
            val = str[i] - 65 + 10;
        }
    decimal = decimal + val * pow(17,len);
    len--;  
    }
    cout << decimal;
    return 0;
}