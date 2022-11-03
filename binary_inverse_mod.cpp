// using Fermat Little Theorem 	:

#include <iostream>
using namespace std;
#define ll long long

const int M = 1e9 + 7;

ll binpow(ll a, ll b, ll m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
           res = ((res%m) * (a % m))%m;
        a = (a%m) * (a % m);
        b >>= 1;
    }
    return res;
}


signed main(){
	int n;
	cin>>n;
	ll a,b,c;
	//cin>>a>>b>>c;
	while(n--){
		cin>>a;
		cout<<binpow(a,M-2,M)<<"\n";
	}
	return 0;
}