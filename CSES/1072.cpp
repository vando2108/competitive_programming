#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		long long x = i * i;
		long long temp = x * (x - 1) / 2;
		if (x > 2) temp -= 4 * (i - 1) * (i - 2);
		cout << temp << '\n';
	}

  return 0;
}

