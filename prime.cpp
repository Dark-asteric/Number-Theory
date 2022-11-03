#include <iostream>
using namespace std;

int main(){
	int n,flag = 0;
	cin>>n;
	for(int i=2; i*i<=n; i++){
		if(n%i == 0){
			cout<<"The number is Not Prime.";
			flag++;
			break;
		}
		}
		if(flag == 0)
			cout<<"Prime.";
		return 0;
}
