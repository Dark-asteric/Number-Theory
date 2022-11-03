//#include <bits/stdc++.h>
#include<iostream>
#include <string>
using namespace std;
signed main(){
	string s;
	cin>>s;
	long long count = 0, count1 = 0, count2 = 0, count3 = 0;
	for(int i=0; i<sizeof(s); i++){
		if(s[i] == 'A')
			count++;
		else if(s[i] == 'C')
			count1++;
		else if(s[i] == 'G')
			count2++;
		else if(s[i] == 'T')
			count3++;
		else
			break;
	}
	int m1 = max(count,count1);
	int m2 = max(count2,count3);
	//cout<<max(count,max(count1,max(count2,count3)))<<endl;
	cout<<max(m1,m2);
	return 0;
}
