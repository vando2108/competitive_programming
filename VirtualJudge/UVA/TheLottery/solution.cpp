#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

void choose(int n, int m, const vector<int> &a, int i, int num, int total,
            int cnt) {
  if (m == i) {
    return total;
  }

  if (m - i == num - cnt) {
    return choose(n, m, a, i + 1, num, lcm(total, a[i]), cnt + 1);
  }
}

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  for (auto &it : a) {
    cin >> it;
  }

  long long result = 0, sign = 1;
  for (int num = 1; num <= n; ++num) {
    for (int mask = 0; mask < (1 << m); ++mask) {
      int cnt = 0, total_lcm = 1;
      for (int i = 0; i < m; ++i) {
        if (mask & i) {
          ++cnt;
          total_lcm = lcm(total_lcm, a[i]);
        }
      }
      cout << total_lcm << '\n';
      if (cnt == num) {
        result += sign * (n / total_lcm);
      }
    }
    sign *= -1;
  }

  cout << n - result << ' ';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int tc = 2;
  // cin >> tc;

  while (tc--) {
    solve();
  }

  return 0;
}
