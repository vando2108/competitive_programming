#include <bits/stdc++.h>
#include <climits>

using namespace std;

const int N = (int)2e5 + 10;

int n, k, room[N];
array<int, 3> a[N];

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    cin >> a[i][0] >> a[i][1];
    a[i][2] = i;
  }
  sort(a + 1, a + 1 + n);
  multiset<array<int, 2>> s;
  int ans = 0, cnt = 0;
  for (int i = 1; i <= n; i++) {
    auto it = s.lower_bound({a[i][0], 0});
    if (it != s.begin()) {
      it--;
      s.erase(it);
      if (s.size() < k) cnt++;
      s.insert({a[i][1], (*it)[1]});
      room[a[i][2]] = (*it)[1];
    }
    else {
      ans++;
      if (s.size() < k) cnt++;
      s.insert({a[i][1], ans});
      room[a[i][2]] = ans;
    }
  }
  cout << cnt;

  return 0;
}
