#include <bits/stdc++.h>
#include <deque>

using namespace std;

const int N = (int)2e5 + 10;

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 


  int n, ans = 0;  
  cin >> n;
  multiset<int> s;
  for (int i = 1; i <= n; i++) {
    int x;  cin >> x;
    auto it = s.upper_bound(x);
    if (it != s.end()) {
      s.erase(it);
      s.insert(x);
    }
    else {
      ans++;
      s.insert(x);
    }
  }
  cout << ans;

  return 0;
}

