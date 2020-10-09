#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s[100];
    int num,even = 0,odd = 0;
    cin >> s;
    num = strlen(s);
    for(int i=0;i<num;i++){
        if(i %2 == 0){
            even = even + s[i]-48;
        }
        else{
            odd = odd + s[i]-48;
        }
    }
    cout << abs(even-odd);
}