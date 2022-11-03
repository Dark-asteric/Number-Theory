#include <iostream>
#include <string>
using namespace std;
string xrs(string a, string b, int n){
	string ans = "";
	for(int i=0; i<n; i++){
		if(a[i] == b[i]){
			ans += '0';
		}
		else
			ans += '1';
	}
	return ans;
}

int main(){
	string a,b,c;
	cin>>a>>b;
	int m,n;
	m = a.length();
	n = b.length();
	if(m == n){
		 c = xrs(a,b,n);
	}
	else
		return 0;
	cout<<c<<endl;
	return 0;
}
