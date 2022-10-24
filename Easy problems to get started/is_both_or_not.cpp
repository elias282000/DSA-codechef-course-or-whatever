#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int num;
	cin >> num;

	if((num%5==0) && (num%11==0)) cout << "BOTH\n";
	else if ((num%5==0) || (num%11==0)) cout << "ONE\n";
	else cout << "NONE\n";
	return 0;
}
