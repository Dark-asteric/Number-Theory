#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<string> v;
	string s;
	cin>>s;
	v.push_back(s);
	vector<string> :: iterator it;
	for( it = v.rbegin(); it!=v.rend(); it++){
	  cout<<it;
	  }
	return 0;
}