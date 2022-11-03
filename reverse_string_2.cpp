#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void my_rev( string s, int len){
	for(int i = 0; i<len/2; i++){
		swap(s[i], s[len-i-1]);
		}
	cout<<s;
}

int main(){
	string s;
	int n;
	getline(cin,s);
	n=s.length();
	my_rev(s,n);
	return 0;
}
