#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,t,sum = 0;
	cin>>n;
	t = n*(n+1)/2;
	long long arr[n-1];
	for(int i = 0; i<n-1; i++){
		cin>>arr[i];
		sum +=arr[i];
		}
	cout<<t-sum<<endl;
	return 0;
}
