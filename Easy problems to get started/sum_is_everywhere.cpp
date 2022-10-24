#include <bits/stdc++.h>

using namespace std;

#define fastio() ios::sync_with_stdio(0); cin.tie(0);

int main(){
	fastio();

	long long int n, odd = 0, even = 0;
	cin >> n;
	for (long long int i = 1; i <= 2*n; i+=2){
		odd = odd + i;
		even = even + i + 1;
	}
	cout << odd << " " << even;
	return 0;
}
