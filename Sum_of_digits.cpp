#include <iostream>
using namespace std;

int digit_sum(int n){
	int res = 0;
	while(n>0){
		int remainder = n%10;
		n /=10;
		res += remainder;
		}
	return res;
}

signed main(){
	int n;
	cin>>n;
	cout<<digit_sum(n)<<endl;
	return 0;
}
