#include <bits/stdc++.h>

using namespace std;

const int N = (int)2e5 + 10;

int n, a[N], b[N];

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  int n, x; cin >> x  >> n;
  multiset<int> s;
  multiset<int> pos;
  pos.insert(0);
  pos.insert(x);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    b[i] = a[i];
    pos.insert(a[i]);
  }
  sort(a + 1, a + 1 + n);
  for (int i = 1, last = 0; i <= n; i++) {
    s.insert(a[i] - last);
    last = a[i];
    if (i == n) s.insert(x - last);
  }
  vector<int> ans;
  for (int i = n; i >= 1; i--) {
    ans.push_back(*(--(s.end())));
    auto it1 = --pos.lower_bound(b[i]);
    auto it2 = pos.upper_bound(b[i]);
    s.erase(b[i] - *it1);
    s.erase(*it2 - b[i]);
    pos.erase(b[i]);
    s.insert((b[i] - *it1) + (*it2 - b[i]));
  }
  for (int i = (int)ans.size() - 1; i >= 0; i--)
    cout << ans[i] << ' ';


  return 0;
}
