#include <iostream>
#include <vector>
using namespace std;

int main(){
	int a;
	cin>>a;
	vector<int> v;
	int arr[a],sub=0;
	for(int i=0; i<a; i++){
		cin>>arr[i];
		}
	for(int i = 1; i<a;i++){
		sub += (arr[i] + arr[i-1]);
		v.push_back(sub);
		}
	cout<<arr[0]<<" ";
	for(int i =1 ; i<a; i++){
		cout<<v[i]<<" ";
		}
	cout<<endl;
	return 0;
}