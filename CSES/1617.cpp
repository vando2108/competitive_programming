#include <bits/stdc++.h>

using namespace std;

const int MOD = (int)1e9 + 7;

long long power(long long n, long long k) {
  if (k ==  1) return n;
  long long temp = power(n, k / 2) % MOD;
  if (k & 1) return (temp * temp * n) % MOD;
  else return (temp * temp) % MOD;
}

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  int n;
  cin >> n;
  cout << power(2, n);

  return 0;
}

