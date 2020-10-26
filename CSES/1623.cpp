#include <bits/stdc++.h>
#include <limits>

using namespace std;

int n, a[100];
long long ans = INT_MAX;

void kdimo(int i, long long first_gruop, long long second_gruop) {
  if (i > n) {
    ans = min(ans, abs(first_gruop - second_gruop));
    return;
  }
  kdimo(i + 1, first_gruop + a[i], second_gruop);
  kdimo(i + 1, first_gruop, second_gruop + a[i]);
}

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  kdimo(1, 0, 0);
  cout << ans;

  return 0;
}

