#include <iostream>
using namespace std;

#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		if(a == b) cout<<"0\n";
		else if(a<b){
			if((b-a)%2 != 0)cout<<"1"<<endl;
			else cout<<'2'<<endl;
			}
		else{
			ll rs = (a-b);
			if(rs%2 == 0) cout<<"1\n";
			else
				cout<<'2'<<endl;
			}
		}
	return 0;
}
