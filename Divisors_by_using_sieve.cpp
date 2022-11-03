#include <iostream>
#include <vector>
using namespace std;
int N=1e5+10;

int main(){
	vector<int>divisors[N];
	//isprime[0]=isprime[1]=false;
	for(int i=2;i<N;i++){
		for(int j=i; j<N; j+=i){
			divisors[j].push_back(i);
			}
		}
	int n;
	cin>>n;
	for(int i=1; i<	n; i++){
		for(int div:divisors[i])
			cout<<div<<" ";
	}
	cout<<endl;
	return 0;
}