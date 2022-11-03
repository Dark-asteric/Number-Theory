#include <iostream>
using namespace std;

int main(){
	int n, fact=1;
	cin>>n;
	cout<<"Sequence's of "<<n<<" : ";
	for(int i=1; i<=n; i++){
		fact *= i;
		cout<<fact<<" ";
		}
	cout<<endl;
	cout<<"Factorial of "<<n<<" : "<<fact<<endl;
}
