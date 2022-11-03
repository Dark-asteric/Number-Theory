#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector <int> a;
	int n;
	cin>>n;
	for(int i=0 ; i<n; i++){
		a.push_back(i);
		}
	for( int i = a.rbegin(); i! = a.rend(); i++){
		cout<<*i;
		}
	return 0;
}
		
