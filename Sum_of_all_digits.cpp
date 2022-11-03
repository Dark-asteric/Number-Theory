#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int sum = n%10 +(n/1000)*10;
	cout<<sum;
	return 0;
}
