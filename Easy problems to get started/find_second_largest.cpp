#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> num(3);
	cin >> num[0] >> num[1] >> num[2];
	sort(num.begin(), num.end());
	cout << min(max(num[0],num[1]), max(num[1],num[2])) << " ";
	return 0;
}
