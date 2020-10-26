#include <bits/stdc++.h>

using namespace std;

const int N = (int)2e5 + 10;

int n, x, a[N], ans = 0;
bool b[N];

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  cin >> n >> x;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  sort(a + 1, a + 1 + n);
  memset(b, false, sizeof(b));
  for (int i = 1, j = n; i <= n; i++) {
    if (b[i]) continue;
    b[i] = true;
    while (j > i && a[i] + a[j] > x) j--; 
    if (a[i] + a[j] <= x && !b[j]) {
      b[j] = true;
      j--;
    }
    ans++;
  }
  cout << ans;

  return 0;
}

