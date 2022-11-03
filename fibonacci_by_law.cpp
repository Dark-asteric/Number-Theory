#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int fib = (pow((1+sqrt(5)),n) - pow((1-sqrt(5)),n))/ (pow(2,n)*sqrt(5));
	cout<<fib<<endl;
	return 0;
}