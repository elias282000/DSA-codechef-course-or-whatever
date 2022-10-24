#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<long long int> num(3);
	cin >> num[0] >> num[1] >> num[2];
	sort(num.begin(), num.end());
	if(num[0]+num[1] > num[2]){
		if (num[0] == num[1] && num[1] == num[2]) cout << 1;
		else if (num[0] == num [1] || num[1] == num[2]) cout << 2;
		else cout << 3;
	}
	else cout << -1;
	return 0;
}
