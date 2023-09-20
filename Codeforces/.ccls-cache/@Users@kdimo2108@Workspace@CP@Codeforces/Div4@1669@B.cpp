#include <bits/stdc++.h>

using namespace std;

void kdimo() {
	int n;  cin >> n;
	vector<int> a(n + 1, 0);
	for (int i = 0; i < n; i++) {
		int x;  cin >> x;
		a[x]++;
	}

	for (int i = 1; i <= n; i++) {
		if (a[i] >= 3) {
			cout << i << '\n';
			return;
		}
	}
	cout << -1 << '\n';
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

