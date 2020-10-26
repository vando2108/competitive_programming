#include <bits/stdc++.h>

using namespace std;

const int N = (int)2e5 + 10;

int n, ans = 0;
array<int, 2> a[N];

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  cin >> n;
  for (int i = 1; i <= n; i++) 
    cin >> a[i][0] >> a[i][1];
  sort(a + 1, a + 1 + n);
  for (int i = 1, last = 0; i <= n; i++) {
    if (a[i][0] >= a[last][1]) {
      ans++;
      last = i;
    }
  }
  int temp = 0;
  sort(a + 1, a + 1 + n, [](auto A, auto B){ return A[1] < B[1]; });
  for (int i = 1, last = 0; i <= n; i++) {
    if (a[i][0] >= a[last][1]) {
      last = i;
      temp++;
    }
  }
  ans = max(ans, temp);
  cout << ans;

  return 0;
}

