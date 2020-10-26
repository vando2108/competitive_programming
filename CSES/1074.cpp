#include <bits/stdc++.h>

using namespace std;

const int N = (int)2e5 + 10;

int n, a[N];

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  sort(a + 1, a + 1 + n);
  int mid = a[n / 2 + 1];
  long long ans = 0;
  for (int i = 1; i <= n; i++) {
    ans += abs(mid - a[i]);
  }
  cout << ans;

  return 0;
}

