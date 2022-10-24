#include <bits/stdc++.h>

using namespace std;

#define fastio() ios::sync_with_stdio(0); cin.tie(0);

int main(){
	fastio();
	vector<int> tri(3);
	for (int i = 0; i < 3; i++)
		cin >> tri[i];
	sort(tri.begin(), tri.end());
	if(tri[0]+tri[1] > tri[2]) cout << "YES";
	else cout << "NO";
	return 0;
}
