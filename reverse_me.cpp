#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> num(n);
	for (int i = 0; i < n; i++)
		cin >> num[i];
	for (auto i = num.rbegin(); i != num.rend(); i++)
		cout << *i << " ";

	return 0;
}
