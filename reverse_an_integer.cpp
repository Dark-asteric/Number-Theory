#include <iostream>
using namespace std;

int main(){
	int a, remainder, revnum = 0;
	cout<<"Given number is : ";
	cin>>a;
	int temp = a;
	while(a>0){
		remainder = a%10;
		a /= 10;
		revnum = (revnum*10) + remainder;
		}
	if(temp <10)cout<<"\nReversed : "<<revnum<<"0\n\n";
	else
		cout<<"\nReversed : "<<revnum<<"\n\n";
	if(revnum == temp && temp>=10) cout<<"The given number is palindrome.\n";
	else
		cout<<"Not a palindrome.\n";
	return 0;
}
