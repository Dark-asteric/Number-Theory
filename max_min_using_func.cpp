#include <iostream>
using namespace std;

void max(int a, int b){
	if(a>b){
		cout<<"The larger number is: "<<a<<endl;
		}
	else{
		cout<<"The larger number is : "<<b<<endl;
		}
}

void min(int a, int b){
	if(a>b){
		cout<<"The smaller number is : "<<b<<endl;
		}
	else{
		cout<<"The smaller number is : "<<a<<endl;
		}
}

int main(){
	int a,b;
	cout<<"Enter 1st Number : ";
	cin>>a;
	cout<<"Enter 2nd Number : ";
	cin>>b;
	max(a,b);
	min(a,b);
	return 0;
}