#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	string ans = "";
	for(int i = s.length(); i>=0; i--){
		ans += s[i] + " ";
		}
	cout<<(ans.substr(0,ans.length()-1))<<endl;
	return 0;
}
