#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
		}
	//v.erase(unique(v.begin(),v.end()),v.end());
	sort(v.rbegin(),v.rend());
	unordered_set<int>rmv(v.begin(),v.end());
	v.assign(rmv.begin(),rmv.end());
	cout<<v.size()<<endl;
	for(auto it = v.begin(); it != v.end(); it++){
		cout<< *it<<" ";
		}
	return 0;
		
}
