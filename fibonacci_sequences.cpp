#include <iostream>
using namespace std;

void fib(int n){
	int n1 =0, n2 = 1, n3, i;
	for(i=1 ;i<=n; i++){
		cout<<n1 <<" ";
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		}
}

int main(){
	int n;
	cin>>n;
	fib(n);
	return 0;
}
