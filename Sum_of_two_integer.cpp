#include "iostream"
#include "algorithm"
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n<12) return 0;
	if(n%2){
		int s1,s2;
		s1 = n-9;
		s2 = n - s1;
		cout<<s1<<" "<<s2<<endl;
		}
	else{
		int a,b;
		a = n-4;
		b = n-a;
		cout<<b<<" "<<a<<endl;
		}
	return 0;
}
	
		