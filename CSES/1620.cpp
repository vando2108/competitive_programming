#include <bits/stdc++.h>

using namespace std;

const int N = (int)2e5 + 10;

int n, t, a[N];

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  cin >> n >> t;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  long long lb = 1, rb = (long long)1e18;
  while (lb < rb) {
    long long mb = (lb + rb) / 2, temp = 0;
    for (int i = 1; i <= n; i++) 
      temp += min(mb / a[i], (long long)1e9);
    if (temp >= t)
      rb = mb;
    else 
      lb = mb + 1;
  }
  cout << lb;

  return 0;
}

