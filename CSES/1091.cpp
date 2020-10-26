#include <algorithm>
#include <bits/stdc++.h>
#include <queue>
#include <set>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  int n, m;
  cin >> n >> m;
  set<array<int, 2>> s;
  for (int i = 0; i < n; i++) {
    int x;  cin >> x;
    s.insert({x, i});
  }
  for (int i = 1; i <= m; i++) {
    int x;  cin >> x;
    auto it = s.lower_bound({x + 1, 0});
    if (it == s.begin()) {
      cout << -1 << '\n';
    }
    else {
      it--;
      cout << (*it)[0] << '\n';
      s.erase(it);
    }
  }

  return 0;
}

