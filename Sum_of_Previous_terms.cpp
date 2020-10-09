#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n,t1 = 1, t2 = 2,curr=0;
    cin >> n;
    if(n==1 || n==2){
        cout << n;
    }
    else if(n>30){
        cout << "Invalid Input";
    }
    else{
        for(int i = 3; i<=n; i++){
            curr = t1 + t2;
            t1=t2;
            t2=curr;
        }
    cout << curr;
    }
    // NOTE: test case not passed if return 0 not added
    return 0;
}