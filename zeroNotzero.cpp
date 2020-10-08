#include<iostream>
using namespace std;
int main(){
    int i,up, low;
    cin >> low >> up;
    for(i=low; i<=up; i++){
        if(up>=100){
            printf("%03d ",i);
        }
        else if(up>=10){
            printf("%02d ",i);
        }
        else
            printf("%d ",i);
        
        }
}