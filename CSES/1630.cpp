#include <array>
#include <bits/stdc++.h>

using namespace std;

const int N = (int)2e5 + 10;

int n;
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
  long long ans = 0, temp = 0;
  for (int i = 1; i <= n; i++) 
    temp += a[i][0], ans += a[i][1] - temp;
  cout << ans;

  return 0;
}

