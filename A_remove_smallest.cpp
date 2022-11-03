#include <iostream>
#include "vector"
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,arr;
		cin>>n;
		vector<int>v;
		for(int i= 0 ; i<n; i++){
			cin>>arr;
			v.push_back(arr);
			}
		bool count = true;
		sort(v.begin(),v.end());
		for(int i =1;i<n;i++){
			count &=((v[i]-v[i-1])<=1);
			//if((v[0]-v[i+1]) == 1){
			//	count2++;
			//	}
			//cout<<count<<endl;
			}
		//cout<<count<<" ";
		if(count) cout<<"Yes\n";
		else
			cout<<"No\n";
		}
	return 0;
}
		
		
		
