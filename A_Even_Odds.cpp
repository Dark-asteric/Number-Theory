#include <iostream>
#include <vector>

using namespace std;

int main(){
	long long k, n;
	cin>>k>>n;
	vector<long long>v;
	for(long long i =1 ; i<=k; i+=2){
			v.push_back(i);
	}
	for(long long i=2; i<=k; i+=2){
		v.push_back(i);
	}
	
	cout<<v[n-1]<<endl;
}
	
