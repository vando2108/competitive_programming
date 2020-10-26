#include <bits/stdc++.h>

using namespace std;

const int N = (int)2e5 + 10;

int n;

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  cin >> n;
  set<array<int, 2>> s;
  for (int i = 1; i <= n; i++) {
    int a, b;  cin >> a >> b;
    s.insert({ a, 1});
    s.insert({ b + 1, -1});
  }
  int ans = 0, temp = 0;
  for (auto it:s) {
    temp += it[1];
    ans = max(ans, temp);
  }
  cout << ans;

  return 0;
}

