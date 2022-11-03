#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	int l,r;
	int pre_sum[n];
	for(int i=1; i<=n; i++){
		cin>>arr[i];
		pre_sum[i] = pre_sum[i-1] + arr[i];
		}
	cin>>l>>r;
	cout<<pre_sum[r]- pre_sum[l-1];
	return 0;
}
