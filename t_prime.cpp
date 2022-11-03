#include <iostream>
using namespace std;

int main(){
	int n,a,c = 0,mx;
	cin>>n;
	for(int i = 1; i<=n; i++){
		cin>>a;
		mx = max(a,a);
	}
	for(int i=1; i*i<=mx; i++){
		if(a%i == 0){
			c++;
			}
	if(c == 3){
		cout<<"YES"<<endl;
		}
	else
		cout<<"NO"<<endl;
	}
	return 0;
}