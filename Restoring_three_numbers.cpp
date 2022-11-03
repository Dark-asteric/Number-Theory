#include <iostream>
using namespace std;

int main(){
	int a,b,c,d,mx,mx1,mx2;
	cin>>a>>b>>c>>d;
	mx1= max(a,b);
	mx2 = max(c,d);
	mx= max(mx2,mx1);
	if(mx == a) cout<<mx - b<<" "<<mx - c<<" "<<mx - d<<endl;
	else if(mx == b) cout<<mx - a<<" "<<mx - c<<" "<<mx - d<<endl;
	else if(mx == c) cout<<mx - a<<" "<<mx - b<<" "<<mx - d<<endl;
	else if(mx == d) cout<<mx - a<<" "<<mx - b<<" "<<mx - c<<endl;
	/**if(a>b && a>c && a>d)
    	cout<<a-b<<" "<<a-c<<" "<<a-d<<endl;
	else if(b>a && b>c && b>d)
		cout<<b-a<<" "<<b-c<<" "<<b-d<<endl;
	else if(c>a && c>b && c>d)
		cout<<c-a<<" "<<c-b<<" "<<c-d<<endl;
	else
		cout<<d-a<<" "<<d-b<<" "<<d-c<<endl;
	*/
	return 0;
}
	
