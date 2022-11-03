#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>
#define ll long long
using namespace std;
int main(){
	ll n,ans;
	cin>>n;
	vector<ll>v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
		ans = __gcd(ans,v[i]);
		}
	//sort(v.begin(),v.end());
	ll count = 0;
	ll s = v[0];
	for(int i=1; i<=sqrt(ans); i++){
		if(ans%i == 0){
			if(ans/i == i) count++;
			else count +=2;
			}
		}
	cout<<count<<endl;
	return 0;
}
