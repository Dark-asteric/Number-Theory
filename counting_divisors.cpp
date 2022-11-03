#include <bits/stdc++.h>
using namespace std;
//const int n = 1e5,a = 1e6;
int count(int n){
	map<int,int>mp;
	for(int i = 2; i*i<=n; i++){
		while(n%i == 0){
			n /=i;
			mp[i]++;
			}
		}
		if(n!=1) mp[n]++;
		int ans = 1;
		for(auto &it : mp){
			it.second++;
			ans *= it.second;
		}
	return ans;
}
int main(){
	long long t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<count(n)<<endl;
		}
		
	return 0;
}
