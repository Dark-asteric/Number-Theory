#include <iostream>
using namespace std;

int main(){
	int i;
	for(i = 1; i<=1000; i++){
		if(i %2 == 0 && i%5 == 0 && i%7 == 0&& i%13==0)
			cout<<i<<endl;
		}
	return 0;
}