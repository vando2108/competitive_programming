#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  int n;  cin >> n;
  map<int, int> cnt;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    int x;  cin >> x;
    if (cnt[x] == 0) {
      ans++;
      cnt[x]++;
    }
  }
  cout << ans;

  return 0;
}

