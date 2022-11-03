#include <iostream>
using namespace std;

int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n;
		//int cnt=0;
		cin>>n;
		if(n & (n-1)) cout<<"Yes\n";
		else
			cout<<"No\n";
		}
	return 0;
}