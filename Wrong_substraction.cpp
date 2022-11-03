//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	long long n,k,t;
	cin>>n>>k;
	for(int i=0; i<k;i++){
		if(n%10 == 0){
			//t--;
			n /= 10;
		}
		//cout<<n/10<<endl;
		else
			n--;
		}
	cout<<n;
	return 0;
}
			
