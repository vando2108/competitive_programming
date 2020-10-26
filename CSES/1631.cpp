#include <bits/stdc++.h>

using namespace std;

const int N = (int)2e5 + 10;

long long n, a[N];
long long sum = 0;

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> a[i], sum += a[i];
  sort(a + 1, a + 1 + n);
  cout << max(sum, a[n] * 2);

  return 0;
}

