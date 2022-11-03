#include <iostream>
using namespace std;
int main(){
	int m,n,count = 0;
	cin>>m>>n;
	for(int i=m ; i<=n; i++){
		if(n%i == 0){
			 count ++;
			}
	}
	if(n%2 == 0 || n%3 ==0)
		count++;
	if(count == 0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}