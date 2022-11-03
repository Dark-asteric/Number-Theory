#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int>arr(4);
	for(int i=0; i<4; i++){
		cin>>arr[i];
		}
	sort(arr.begin(),arr.end());
	if((arr[0] + arr[1])> arr[2] || (arr[1]+arr[2])>arr[3])
		cout<<"TRIANGLE\n";
	else if((arr[0] + arr[1])==arr[2] || (arr[1]+arr[2]) == arr[3])
		cout<<"SEGMENT\n";
	else
		cout<<"IMPOSSIBLE\n";		
}