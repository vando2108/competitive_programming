// Copyright 2023-09-07 21:52:18 Do Vu

#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

long long sum_range(long long l, long long r) {
  return ((r - l + 1) * (l + r)) / 2;
}

void solve() {
  int n, x, y;
  cin >> n >> x >> y;

  int common = n / lcm(x, y);
  cout << sum_range(n - n / x + common + 1, n) - sum_range(1, n / y - common)
       << '\n';
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
