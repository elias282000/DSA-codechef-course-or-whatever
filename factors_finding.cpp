#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> factors;
	int n, cnt=0;
	cin >> n;
	for (int i = 1; i <= (n/2); i++){
		if (n%i==0){
			factors.push_back(i);
			cnt++;
		}
	}
	//cnt++;
	cout << cnt+1 << " ";
	for (int i = 0; i < factors.size(); i++)
		cout << factors[i] << " ";
	cout << n << " ";

	return 0;
}
