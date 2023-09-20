// Copyright 2023-09-07 14:30:09 Do Vu

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
  int n;
  cin >> n;

  if (n & 1) {
    for (auto turn : {0, 1}) {
      for (int i = 0; i < n; ++i) {
        cout << i << ' ';
      }
      cout << '\n';
    }

    for (int i = 0; i < n; ++i) {
      cout << (2 * i) % n << ' ';
    }
  } else {
    cout << -1;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
