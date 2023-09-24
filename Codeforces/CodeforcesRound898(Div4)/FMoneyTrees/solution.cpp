#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  vector<int> h(n);
  for (auto &it : a) {
    cin >> it;
  }
  for (auto &it : h) {
    cin >> it;
  }

  long long l = 0, result = (a[0] <= k) ? 1 : 0, sum = a[0];
  for (int i = 1; i < n; ++i) {
    if (h[i - 1] % h[i] == 0) {
      sum += a[i];
    } else {
      l = i;
      sum = a[i];
    }
    while (sum > k) {
      sum -= a[l++];
    }
    result = max(result, i - l + 1);
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
