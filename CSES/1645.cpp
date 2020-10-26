#include <bits/stdc++.h>

using namespace std;

const int N = (int)2e5 + 10;

int n, a[N], link[N];

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 
 
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    link[i] = i - 1;
    while (~link[i] && a[link[i]] >= a[i])
      link[i] = link[link[i]];
    cout << link[i] + 1 << ' ';
  }

  return 0;
}

