#include <iostream>
using namespace std;

int main(){
	int n,count=0;
	cin>>n;
	bool flag = true;
	for(int i = 2; i<=n; i++){
		if(n%i == 0){
			//flag = false;
			cout<<i<<" ";
			}
			//cout<<i<<" ";
		}
	return 0;
}
