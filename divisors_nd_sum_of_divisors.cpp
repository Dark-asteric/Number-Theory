#include <iostream>
using namespace std;

int main(){
	int n, count=0, sum=0;
	cin>>n;
	for(int i=1; i<=n;i++){
		if(n%i == 0){
			cout<<i<<" ";
			count++;
			sum+=i;
			}
		}
	cout<<endl;
	cout<<"Number of divisors : "<<count<<endl;
	cout<<"Sum of divisors : "<<sum<<endl;
	return 0;
}
