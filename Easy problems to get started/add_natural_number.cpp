#include <bits/stdc++.h>

using namespace std;

#define fastio() ios::sync_with_stdio(0); cin.tie(0);

int main(){
	fastio();

	long long int n;
	cin >> n;
	long long int cnt = n;
	while(n--)
		cnt += n;
	cout << cnt;
	return 0;
}
