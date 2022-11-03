#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, i;
	cin>>n;
	vector<int> prime_factors;
	for(int i=2; i*i<=n; i++){
		while(n%i == 0){
			prime_factors.push_back(i);
			n /= i;
			}
		}
	if(n>i){
		prime_factors.push_back(n);
		}
	for(int prime: prime_factors){
		cout<<prime<<" ";
		}
	return 0;
}
