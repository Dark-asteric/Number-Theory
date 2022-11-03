#include <iostream>
using namespace std;

int main(){
	long long n,remainder = 0;
	cin>>n;
	while(n!=0){
		if(n%10 == 4 || n%10 == 7){
			remainder++;
			}
		n /=10;
		}
	if(remainder == 4 || remainder == 7) 
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
