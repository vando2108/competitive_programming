#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);

  for (auto &it : a) {
    cin >> it;
  }

  int sum_b = 0;
  for (auto &it : b) {
    cin >> it;
    sum_b |= it;
  }

  int mn = 0, mx = 0;
  if (n & 1) {
    for (int i = 0; i < n; ++i) {
      mn ^= a[i];
      mx ^= (a[i] | sum_b);
    }
  } else {
    for (int i = 0; i < n; ++i) {
      mn ^= (a[i] | sum_b);
      mx ^= a[i];
    }
  }
  cout << mn << ' ' << mx << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int tc = 1;
  cin >> tc;

  while (tc--) {
    solve();
  }

  return 0;
}
