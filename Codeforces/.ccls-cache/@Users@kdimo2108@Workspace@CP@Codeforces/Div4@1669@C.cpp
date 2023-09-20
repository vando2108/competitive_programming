#include <bits/stdc++.h>

using namespace std;

void kdimo() {
	int n;  cin >> n;

	int odd = -1, even = -1;
	bool flag = true;
	for (int i = 1; i <= n; i++) {
		int x;  cin >> x;
		if (i & 1) {
			if (odd == -1) odd = x % 2;
			else if (odd != x % 2) {
				flag = false;
			} 
		}
		else {
			if (even == -1) even = x % 2;
			else if (even != x % 2) {
				flag = false;
			}
		}
	}
	if (flag)
		cout << "YES\n";
	else 
		cout << "NO\n";
}

int main() {
	ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

	int testCase;  
	cin >> testCase;
	while (testCase--) {
		kdimo();
	}

	return 0;
}

