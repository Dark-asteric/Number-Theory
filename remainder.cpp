#include <iostream>
using namespace std;
const int n=1e9+7;
int main(){
	long long n;
	cin>>n;
	if(n%2){
		
		cout<<-(n+1)/2<<endl;
	}
	else
		cout<<n/2;
	return 0;
	}
