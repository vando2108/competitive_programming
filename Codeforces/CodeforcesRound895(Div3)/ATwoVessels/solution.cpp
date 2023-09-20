// Copyright 2023-09-07 21:40:33 Do Vu

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b) {
    swap(a, b);
  }

  int res = 0;
  while (b != (a + b) / 2) {
    int temp = b - (a + b) / 2;
    a += min(temp, c);
    b -= min(temp, c);
    ++res;
  }

  cout << res << '\n';
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
