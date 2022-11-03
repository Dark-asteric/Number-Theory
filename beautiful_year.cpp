#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	long long n,count = 0;
	cin>>n;
	for(int i = n+1 ; i<=10000; i++){
		// First, find last digits of the given number.
		long long r,r2,r3,r4,a,b,c,d;
		a = i%10;
		r = a;
		a = i/10;
		
		b = a%10;
		r2 = b;
		b = a/10;
		
		c = b%10;
		r3 = c;
		c= b/10;
		
		d = c%10;
		//Then, compare if all digits are not same.
		if(r!=r2 && r!=r3 && r!=d && r2 != r3&& r2 != d && r3!=d){
			cout<<i<<endl;
			break;
			}
		}
			//cout<<"Yes\n";
		//else
			//cout<<"No\n";
		//cout<<r<<endl<<r2<<endl<<r3<<endl<<d;
	return 0;
}
		
			