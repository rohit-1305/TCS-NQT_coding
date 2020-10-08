#include <iostream>
using namespace std;

int main() 
{
int i,sum = 0,s, n;
cin >> s >> n;
sum = s;
for(i = 1; i < n; i++){
	sum = sum*2 - 1;
}
cout<<sum;
return 0;
}