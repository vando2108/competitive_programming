#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
  string s;
  cin >> s;
  int cnt = 0, n = s.size(), cnt_b = 0;
  vector<int> a;
  for (int i = 0; i < n; ++i) {
    if (s[i] == 'A')
      ++cnt;
    else {
      cnt_b += 1;
      a.emplace_back(cnt);
      cnt = 0;
    }
  }
  if (cnt != 0) {
    a.emplace_back(cnt);
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
