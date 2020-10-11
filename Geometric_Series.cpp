#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n,num, odd, even;
    cin >> n;
    if(n%2==0){
        num = pow(3,(n-1)/2);
    }
    else
        num = pow(2,n/2);
    
    cout << num;
}