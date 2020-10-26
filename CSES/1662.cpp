#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  cin >> n;
  long long sum = 0, ans = 0;
  map<int, int> mp;
  mp[0] = 1;
  for (int i = 1; i <= n; i++) {
    int x;  cin >> x;
    sum = (sum + x % n + n) % n;
    ans += mp[sum];
    mp[sum]++;
  }
  cout << ans;

  return 0;
}

