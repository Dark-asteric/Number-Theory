//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve(int n, int k) {
   /**if (k > (n - 1) / 2) {
      cout << "-1";
      return;
   }*/
   int a[101];
   for (int i = 1; i <= n; i++)
      a[i] = i;
   for (int i = 2; i <= 2 * k; i += 2) {
      swap(a[i], a[i + 1]);
   }
   for (int i = 1; i <= n; i++)
      cout << a[i] << " ";
   cout<<endl;
}
int main() {
   int n,t;
   cin>>t;
   int k = 1;
   while(t--){
   		cin>>n;
   		solve(n, k);
   }
}
