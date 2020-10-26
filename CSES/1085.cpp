#include <bits/stdc++.h>
#include <climits>
 
using namespace std;
 
const int N = (int)2e5 + 10;
 
int n, k, a[N];
 
int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 
 
  cin >> n >> k;
  long long lb = 0, rb = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    lb = max(lb, (long long)a[i]);
    rb += a[i];
  }
  cerr << lb << ' ' << rb << '\n';
  long long ans = INT_MAX;
  while (lb <= rb) {
    long long mb = (lb + rb) >> 1;
    long long sum = 0, div = 1;
    bool ok = true;
    for (int i = 1; i <= n; i++) {
      if (a[i] > mb) {
	ok = false;
	break;
      }
      if (sum + a[i] > mb) {
	sum = a[i];
	div++;
      } 
      else sum += a[i];
    }
    if (div > k) ok = false;
    if (ok) ans = mb;
    if (ok) rb = mb - 1;
    else lb = mb + 1;
  }
  cout << ans;
 
  return 0;
}
