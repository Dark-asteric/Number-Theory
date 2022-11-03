#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string s;
	int i, len, freq[26];
	getline(cin,s);
	
	len = s.length();
	
	for(i = 0 ; i<26; i++){
		freq[i] = 0;
		}
	for(i = 0 ; i<len; i++){
		if(s[i]>='a' && s[i]<='z'){
			freq[s[i]-97]++;
			}
		else if(s[i]>='A' && s[i]<='Z'){
			freq[s[i]-65]++;
			}
		}
		cout<<"\nFreq. of all characters: \n";
		for(i=0; i<26; i++){
			if(freq[i] !=0){
				cout<<(i+97)<<" = "<<freq[i]<<endl;
				}
			}
		return 0;
}
