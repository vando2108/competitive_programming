#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

void solve() {
  int n, k, x;
  cin >> n >> k >> x;

  if (n < k || k - 1 > x) {
    cout << -1 << '\n';
    return;
  }

  int result = 0;
  for (int i = 0; i < k; ++i) {
    result += i;
  }

  for (int i = k; i < n; ++i) {
    result += (k == x) ? x - 1 : x;
  }

  cout << result << '\n';
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
