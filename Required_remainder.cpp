#include <iostream>
using namespace std;

int main(){
	long long t;
	cin>>t;
	while(t--){
		long long x,y,n;
		cin>>x>>y>>n;
		long long remainder;
		remainder = n - n%x;
		if(remainder + y <= n)
			cout<<remainder + y<<endl;
		else
			cout<<remainder - (x-y)<<endl;
		}
	return 0;
}