#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  int n, x;  cin >> n >> x;
  set<array<int, 2>> s;
  for (int i = 1; i <= n; i++) {
    int a;  cin >> a;
    auto it = s.lower_bound({x - a, 0});
    if (it != s.end() && (*it)[0] == x - a) {
      cout << (*it)[1] << ' ' << i << '\n';
      return 0;
    }
    s.insert({a, i});
  }
  cout << "IMPOSSIBLE"; 

  return 0;
}

