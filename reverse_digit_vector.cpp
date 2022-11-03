#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> v;
	for(int i=0; i<=10; i++){
		int n;
		cin>>n;
		v.push_back(n);
		}	
	vector<int> :: iterator it;
		for( it = v.rbegin(); it!= v.rend(); it++)
		   cout<<*it;
	}
}
	
	