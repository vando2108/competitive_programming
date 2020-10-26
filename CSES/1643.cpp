#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  int n;  cin >> n;
  long long sum = 0, mn = INT_MAX, ans = -INT_MAX;
  for (int i = 1; i <= n; i++) {
    int x;  cin >> x;
    mn = min(mn, sum);
    sum += x;
    ans = max(ans, sum - mn);
  }
  cout << ans;

  return 0;
}

