#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    getline(cin,str1);
    str2 = str1;
    reverse(str2.begin(),str2.end());
    if(str1 == str2){
       cout << str1 << " is a palindrome";
    }else{
         cout << str1 << " is not a palindrome";
    }


}