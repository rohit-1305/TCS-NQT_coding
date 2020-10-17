#include <iostream>
using namespace std;
int main(){
    int number,square,i;
    cin>>number;
    for( i = 2;i<=number/2;i++){
        if(i*i==number){
            cout<<"YES";
            break;
        }
    }
    if(i*i!=number){
        cout<<"NO";
    }
    return 0;
}