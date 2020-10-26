#include <bits/stdc++.h>

using namespace std;

const int N = (int)2e5 + 10;

int a[N];

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  int n, ans = 0;
  cin >> n;
  map<int, int> cnt;
  for (int i = 1, last = 1; i <= n; i++) {
    cin >> a[i];
    while (cnt[a[i]] > 0) 
      cnt[a[last++]]--;
    ans = max(ans, i - last + 1);
    cnt[a[i]]++;
  }
  cout << ans;

  return 0;
}

