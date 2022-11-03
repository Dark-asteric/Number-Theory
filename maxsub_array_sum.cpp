#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n], mx = INT_MIN;
	for(int i = 0; i<n ; i++){
		cin>>arr[i];
		}
	// Algorithm 2 : O(n^2) :
	/*for(int i =0;i<n; i++){
		int sum = 0;
		for(int j = i; j<n ; j++){
			sum += arr[j];
			mx = max(mx,sum);
			}
		}
	cout<<mx<<endl;*/
	
	//Algorithm 3 : O(n) :
		
	int sum = 0;
	for(int i=0; i<n; i++){
		cout<<"sum + arr[i] = "<< sum+arr[i]<<" ";
		sum = max(arr[i], sum+arr[i]);
		cout<<"Sum = "<<sum<<endl;
		mx = max(sum,mx);
	}
	cout<<mx;
	return 0;
}