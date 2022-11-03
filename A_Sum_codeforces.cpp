#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a>=b && a>=c){
			if((b+c)==a) cout<<"Yes\n";
			else
				cout<<"No\n";
			}
		else if((b>=a) && b>=c){
			if(a+c == b) cout<<"Yes\n";
			else
				cout<<"No\n";
			}
		else{
			if((a+b) == c) cout<<"Yes\n";
			else
				cout<<"No\n";
			}
		}
	return 0;
}
