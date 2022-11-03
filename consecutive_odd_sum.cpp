#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int x,y,a;
		cin>>x>>y;
		//if(n==0) break;
		if(x>y){
			int sum = 0;
			for(int i = y+1; i<x; i++){
				if(i%2){
					sum += i;
					}
				}
				cout<<sum<<endl;
		}
		else{
			int sum1 = 0;
			for(int i = x+1; i<y; i++){
				if(i%2){
					sum1 += i;
					}
			}
			cout<<sum1<<endl;
		}
		//cout<<sum<<endl;
	}
	return 0;
}