#include <iostream>
using namespace std;

int fib(int n){
	return fib(n-1)+fib(n-2);
}

int main(){
	int n, n1 = 0, n2 = 1, n3, sum=0;
	cin>>n;
	cout<<n1<<" "<<n2<<" ";
	for(int i=3; i<=n; i++){
		n3 = n1 + n2;
		//sum += n3;
		cout<<n3<<" ";
		n1 = n2;
		n2 = n3;
		}
	cout<<endl<<fib(n)<<endl;
	return 0;
}
