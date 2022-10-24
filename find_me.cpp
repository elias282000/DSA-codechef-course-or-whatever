#include <bits/stdc++.h>

using namespace std;

#define fastio() ios::sync_with_stdio(0); cin.tie(0);

int main(){
	fastio();

	int n, num;
	cin >> n >> num;
	vector<int> num_vect(n);
	for (int i = 0; i < n; i++)
		cin >> num_vect[i];
	vector<int>::iterator it = find(num_vect.begin(), num_vect.end(), num);
	if (it!=num_vect.end()) cout << 1;
	else cout << -1;

	return 0;
}

