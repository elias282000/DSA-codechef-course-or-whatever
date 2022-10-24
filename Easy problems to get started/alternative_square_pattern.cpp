#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		if (i%2 != 0){
			for(int j = ((i-1)*5)+1; j <= i*5; j++)
				cout << j << " ";
		}
		else{
			for (int j = i*5; j > (i-1)*5; j--)
				cout << j << " ";
		}
		cout << "\n";
	}
	return 0;
}
