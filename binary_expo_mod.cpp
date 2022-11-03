#include <iostream>
using namespace std;
#define ll long long

/**ll binpow(ll a, ll b, ll c){
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
**/
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
		cin>>a>>b>>c;
		cout<<binpow(a,b,c)<<"\n";
	}
	return 0;
}
