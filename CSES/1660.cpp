#include <bits/stdc++.h>

using namespace std;

const int N = (int)2e5 + 10;

int n, x;

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 
  
  cin >> n >> x;
  long long sum = 0, ans = 0;
  map<long long, int> mp;
  mp[0] = 1;
  for (int i = 1; i <= n; i++) {
    int a;  cin >> a;
    sum += a;
    ans += mp[sum - x];
    mp[sum]++;
  }
  cout << ans;

  return 0;
}

