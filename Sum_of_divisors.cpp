#include <iostream>
using namespace std;
int sum(int n){
	map<int,int>mp;
	for(int i = 2; i*i<=n; i++){
		while(n%i ==0){
			n /= i;
			mp[i]++;
		}
	}
	if(n != 1) mp[n]++;
	int sum = 1;
	for(auto & it:mp){
		int p=1, crnt_sum = 0;
		for(int i = it.second +1; i>0; i--){
			crnt_sum += (i*p);
			p *= it.first;
			}
		sum += crnt_sum;
	}
	return sum;
}
int main(){
	long long n;
	cin>>n;
	cout<<sum(n)<<"\n";
	return 0;
}
