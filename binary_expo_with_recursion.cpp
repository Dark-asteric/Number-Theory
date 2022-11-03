#include <iostream>
using namespace std;
#define ll long long

ll binpow(ll a, ll b){
	if(b == 0) return 1;
	ll res = binpow(a, b/2);
	cout<<res<<endl;
	if(b & 1)
		return res * res * a;
	else
		return res*res;
}

signed main(){
	ll a, b;
	cin>>a>>b;
	cout<<binpow(a,b);
	return 0;
}