#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m, -1));
  for (int i = 0; i < min(n, m); ++i) {
    int start = min(i + 1, m - 1);
    for (int j = 0; j < m; ++j) {
      a[i][(start + j) % m] = j;
    }
  }
  for (int i = min(n, m); i < n; ++i) {
    a[i] = a[min(n, m) - 1];
  }

  vector<int> v;
  for (int j = 0; j < m; ++j) {
    vector<bool> used(m + 1, false);
    for (int i = 0; i < n; ++i) {
      used[a[i][j]] = true;
    }

    for (int i = 0; i <= m; ++i) {
      if (!used[i]) {
        v.push_back(i);
        break;
      }
    }
  }

  vector<bool> used(m + 1, false);
  for (auto it : v) {
    used[it] = true;
  }

  int result = 0;
  for (int i = 0; i <= m; ++i) {
    if (!used[i]) {
      result = i;
      break;
    }
  }

  cout << result << '\n';
  for (auto line : a) {
    for (auto it : line) {
      cout << it << ' ';
    }
    cout << '\n';
  }
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

