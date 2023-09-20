// Copyright 2023-09-07 21:45:09 Do Vu

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> d(n), s(n);
  for (int i = 0; i < n; ++i) {
    cin >> d[i] >> s[i];
  }

  int res = 0;
  for (int i = 1; i <= 1000; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i >= d[j]) {
        if (i - 1 + i - d[j] >= d[j] - 1 + s[j]) {
          cout << res << '\n';
          return;
        }
      }
    }
    res = i;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
