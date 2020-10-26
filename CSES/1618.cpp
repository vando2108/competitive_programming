#include <bits/stdc++.h>

using namespace std;

int power(int n, int k) {
  if (k == 1) return n;
  int temp = power(n, k / 2);
  if (k & 1) return temp * temp * n;
  return temp * temp;
}

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  int n;
  cin >> n;
  int cnt5 = 0;
  for (int i = 1; power(5, i) <= n; i++) {
    cnt5 += n / power(5, i);
  }
  cout << cnt5;

  return 0;
}

