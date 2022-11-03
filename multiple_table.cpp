#include <iostream>
using namespace std;

#define ll long long

int main(){
	ll n,x,count = 0;
	cin>>n>>x;
	for(int i = 1; i<=n; i++){
			//cout<<i*j<<" ";
		if(i*n>=x){
			if(x%i == 0) count++;
		}
		}
	cout<<count<<"\n";
	return 0;
}