﻿#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void reversewords( string s){
	vector <string> tmp;
	string str = "";
	for(int i=0 ; i<s.length(); i++){
		if(s[i] == ' '){
			tmp.push_back(str);
			str = "";
			}
		else
			str +=s[i];
	}	
	tmp.push_back(str);
	int i;
	for(i = tmp.size()-1; i>=0; i--){
		cout<<tmp[i]<<" ";
		}
		//cout<<tmp[0]<<endl;
}

int main(){
	string s;
	getline(cin,s);
	reversewords(s);
	return 0;
}