#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

int main(){
	int arr[5] = {2, 4, 6, 7,8};
	int s = 5,temp;
	for(int i = 0; i<5/2 ; i++){
		//swap(arr[i],arr[5-i-1]);
		temp = arr[i];
		arr[i] = arr[5-i-1];
		arr[5-i-1] = temp;
		}
	for(int i= 0; i<5; i++){
		cout<<arr[i];
	}
	return 0;
}
