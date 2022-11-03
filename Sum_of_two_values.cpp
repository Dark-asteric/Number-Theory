#include <iostream>
using namespace std;

int main(){
	int n,x;
	cin>>n>>x;
	int ar[n];
	for(int i= 1; i<=n; i++){
		int sum = 0;
		cin>>ar[i];
		//sort(ar.begin(),ar.end());
		sum = ar[i] + ar[i+1];
		if(sum == x)
			cout<<i;
		}
	return 0;
}
