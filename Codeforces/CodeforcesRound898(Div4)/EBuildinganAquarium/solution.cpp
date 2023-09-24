#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int n, x;
  cin >> n >> x;
  int mx = 0;
  vector<int> a(n);
  for (auto &it : a) {
    cin >> it;
    mx = max(mx, it);
  }

  long long l = 1, r = INT_MAX;
  long long result = 0;
  while (l <= r) {
    long long mid = (l + r) >> 1;
    long long temp = 0;
    for (int i = 0; i < n; ++i) {
      if (a[i] < mid) {
        temp += mid - a[i];
      }
    }

    if (temp <= x) {
      result = max(mid, result);
      l = mid + 1;
    }
    if (temp > x) {
      r = mid - 1;
    }
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
