#include <bits/stdc++.h>

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
    cin >> a[i][1] >> a[i][0];
    a[i][2] = i;
  }
  sort(a + 1, a + 1 + n);
  set<array<int, 2>> s;
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    auto it = s.lower_bound({a[i][1] + 1});
    if (it != s.begin()) {
      it--;
      room[a[i][2]] = (*it)[1];
      s.erase(it);
    } 
    else 
      room[a[i][2]] = s.size();
    if (s.size() < k) {
      s.insert({a[i][0], room[a[i][2]]});
      cnt++;
    }
  }
  cout << cnt;

  return 0;
}

