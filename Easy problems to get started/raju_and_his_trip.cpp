#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	if (n%5==0 || n%6==0)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}
