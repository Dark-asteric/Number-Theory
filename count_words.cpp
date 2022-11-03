#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string s;
	int i = 0, count = 0;
	getline(cin,s);
	while(s[i] != '\0'){
		if(s[i] == ' '){
			count++;
			}
		i++;
		}
	cout<<"Total words in the sentence is : "<<count+1<<endl;
	return 0;
}
