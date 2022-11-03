#include <iostream>
using namespace std;

int main(){
	int a,b,x,y;
	cin>>a>>b;
	x=a,y=b;
	while(a!=b){
		if(a>b){
			a = a-b;
			}
		else
			b=b-a;
		}
	cout<<(x*y)/a<<endl;
}
