#include <iostream>
using namespace std;

int main(){
	int n,sum = 0,sub_sum = 0;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n-1; i++){
		cin>>arr[i];
		sub_sum += arr[i];
		}
	
	for(int i = 1 ; i<=n;i++) sum +=i;
	cout<<sum-sub_sum<<endl;
		
	return 0;
}
