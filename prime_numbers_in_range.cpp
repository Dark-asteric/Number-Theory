#include <iostream>
using namespace std;
int main(){
	int a,b,i,j,count1=0;
	cin>>a>>b;
	for(i=a; i<=b; i++){
		int count = 0;
		if(i==0 || i==1) continue;
		for(j=2; j*j<b; j++){
			if(i%j == 0 && i!=2){
				count++;
				break;
				}
			}
	if(count == 0) count1++;
	if(count == 0) 
		cout<<i<<" ";
	}
	cout<<"\nTotal prime numbers : "<<count1<<endl;
	return 0;
}
