#include <bits/stdc++.h>

using namespace std;

const int N = (int)2e5 + 10;

int n, m, k, a[N], b[N];

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  cin >> n >> m >> k;
  for (int i = 1; i <= n; i++) 
    cin >> a[i];
  for (int i = 1; i <= m; i++) 
    cin >> b[i];
  sort(a + 1, a + 1 + n);
  sort(b + 1, b + 1 + m);
  int ans = 0;
  for (int i = 1, j = 1; i <= n; i++) {
    while (j < m && a[i] - k > b[j]) j++;
    if (abs(a[i] - b[j]) <= k) {
      j++, ans++;
    }
  }
  cout << ans;

  return 0;
}

