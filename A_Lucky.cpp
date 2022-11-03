#include <iostream>
using namespace std;
int digit_sum(int n){
	return digit_sum(n/10)+ (n%10);
	
}
signed main(){
	int t;
	cin>>t;
	while(t--){
		int n,rmndr,rslt,remainder,result,sum, sum2;
		cin>>n;
		remainder= n%1000;
		result = n/1000;
		sum = digit_sum(remainder);
		sum2 = digit_sum(result);
		
		/*while(remainder>0){
			sum = 0;
			rmndr = remainder%10;
			sum = (rmndr+ remainder/10);
			//cout<<sum;
			}
			**/
		/*for(int i=0; i<3; i++){
			rslt = result%10;
			sum2 += rslt;
			rslt /= 10;
			cout<<sum2;
			**/
		cout<<sum<<" "<<sum2;
	/**if(sum == sum2) cout<<"Yes\n";
	else
		cout<<"No\n";
		*/
	}
		
	//cout<<n%1000<<" "<<n/1000;
	return 0;
}
