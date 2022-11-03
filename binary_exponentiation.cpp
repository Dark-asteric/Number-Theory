#include <iostream>
using namespace std;
#define ll long long

ll binpow(ll a, ll b){
	ll res = 1;
	while(b>0){
		if(b & 1){
			res *= a;
			cout<<"\nif b odd 'a' = "<<a<<"\nreserve: "<<res<<"\n";
			}
		a *= a;
		cout<<"A = "<<a<<endl;
		cout<<"before shifting : "<<b<<endl;
		b >>= 1;
		cout<<"after shifting : "<<b<<endl;
		}
	return res;
		//cout<<(double)res;
}

signed main(){
	double a;
	ll b;
	cin>>a>>b;
	cout<<"Answer is : "<<binpow(a,b)<<"\n";
	return 0;
}
