#include <bits/stdc++.h>

using namespace std;

const int N = (int)2e5 + 10;

int n, l, r;
long long a[N];

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  cin >> n >> l >> r;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    a[i] += a[i - 1];
  }
  set<array<long long, 2>> s;
  for (int i = l; i <= r; i++)
    s.insert({a[i], i});
  long long ans = -(long long)1e18;
  for (int i = 1; i <= n - l + 1; i++) {
    auto it = --(s.end()); 
    ans = max(ans, (*it)[0] - a[i - 1]);
    s.erase({a[i + l - 1], i + l - 1});
    if (i + r <= n) s.insert({a[i + r], i + r});
  }
  cout << ans;

  return 0;
}

