#include <iostream>
#include<vector>
using namespace std;

int fib (int n) {
    pair<int, int> p;
    if (n == 0)
        return {0, 1};

    auto p = fib(n >> 1);
    int c = p.first * (2 * p.second - p.first);
    int d = p.first * p.first + p.second * p.second;
    if (n & 1)
        return {d, c + d};
    else
        return {c, d};
}

int main(){
	int n;
	cin>>n;
	cout<<fib(n);
	return 0;
}
	
