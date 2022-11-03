#include <iostream>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){
	if(b == 0)
	  return a;
	return gcd(b,a%b);
}

ll fact(ll a, ll b){
	ll fact1 = 1, fact2 = 1;
	for(ll i=1; i<=a;i++)
		fact1 *= i;
	for(ll i=1; i<=b;i++)
		fact2 *= i;
	return gcd(fact1,fact2);
}
int main(){
	//int t;
	//cin>>t;
	//while(t--){
		ll a,b;
		cin>>a>>b;
		//cout<<gcd(a,b)<<" "<<(a*b)/gcd(a,b)<<"\n";
		cout<<fact(a,b)<<endl;
		//}
	return 0;
}
	
