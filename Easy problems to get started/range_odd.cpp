#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int l, r;
	cin >> l >> r;
	if(l%2==0){
		for (int i = l+1; i <= r; i+=2)
			cout << i << " ";
	}
	else {
		for (int i = l; i <= r; i+=2)
			cout << i << " ";
	}
	return 0;
}
