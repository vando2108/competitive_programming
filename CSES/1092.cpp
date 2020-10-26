#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 
	
  int n;
  cin >> n;
  if (n < 3) cout << "NO";
  else {
    if (n % 4 == 0) {
      cout << "YES" << '\n';
      cout << n / 2 << '\n';
      for (int i = 1; i <= n / 2; i += 2) {
	cout << i << ' ' << n - i + 1 << ' ';
      }
      cout << '\n' << n / 2 << '\n';
      for (int i = 1; i <= n / 2; i += 2) {
	cout << (i + 1) << ' ' << n - i << ' ';
      }
    }
    else if (n % 2 == 0) cout << "NO" << '\n';
    else if (n % 4 == 1) cout << "NO" << '\n';
    else {
      cout << "YES" << '\n' << (n - 3) / 2 + 1 << '\n';
      cout << n << ' ';
      for (int i = 1; i < n / 2; i += 2) {
	cout << i << ' ' << (n - 1) - i + 1 << ' ';
      }
      cout << '\n' << n - (n - 3) / 2 - 1 << '\n' << n / 2 << ' ' << n / 2 + 1 << ' ';	 
      for (int i = 1; i < n / 2; i += 2) {
	cout << (i +  1) << ' ' << (n - 1) - i << ' ';
      }
    }
  }

  return 0;
}

