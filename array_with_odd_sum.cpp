/** 
	coded by - SHAFi.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n],odd = 0,even = 0;
		for(int i = 0 ; i<n ; i++){
			cin>>arr[i];
			
			if(arr[i]%2 !=0) odd++;
			else even++;
			}
		if( odd%2 != 0) cout<<"YES\n";
		else{
			if(odd>0 && even>0) cout<<"YES\n";
			else cout<<"NO\n";
		}
		//cout<<sum;
		}
	return 0;
}
