#include <iostream>
using namespace std;
int main(){
    int i, t1=0,t2=1,t3,number;
    cin>>number;
     cout<<t1<<" "<<t2<<" ";
     for(int i = 3;i<=number;i++){
         t3 = t1 + t2;
         t1 = t2;
         t2 = t3;
         cout<<t3<<" ";
     }
     return 0; 
}