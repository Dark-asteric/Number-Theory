#include <iostream>
using namespace std;

int main(){
	int x,y,z;
	bool flag;
	cin>>x>>y>>z;
	int mx=x;
	if(y>mx){
		mx=y;
		}
	if(z>mx){
		mx=z;
		}
	if(mx == x){
		flag = (x*x)==((y*y) + (z*z));
		cout<<flag<<endl;
		}
	else if(mx == y){
		flag = (y*y) == ((x*x) + (z*z));
		cout<<flag<<endl;
		}
	else if(mx==z){
		flag = (z*z) == ((x*x) + (y*y));
		cout<<flag<<endl;
		}
		
	return 0;
}