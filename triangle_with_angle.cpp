#include <bits/stdc++.h>

using namespace std;

#define fastio() ios::sync_with_stdio(0); cin.tie(0);

int main(){
	fastio();

	int a, b, c;
	cin >> a >> b >> c;
	if ((a+b+c == 180) && a>0 && b>0 && c>0) cout << "YES";
	else cout << "NO";
}
