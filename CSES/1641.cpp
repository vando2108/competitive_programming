#include <bits/stdc++.h>

using namespace std;

const int N = (int)5e3 + 10;

int n, x;
array<int, 2> a[N];

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  cin >> n >> x;
  for (int i = 1; i <= n; i++) {
    cin >> a[i][0];
    a[i][1] = i;
  }
  sort(a + 1, a + 1 + n);
  for (int i = 1; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      int lb = j + 1, rb = n;
      while (lb <= rb) {
	int mb = (lb + rb) >> 1;
	if (a[mb][0] + a[i][0] + a[j][0] == x) {
	  cout << a[mb][1] << ' ' << a[i][1] << ' ' << a[j][1];
	  return 0;
	}
	if (a[mb][0] > x - a[i][0] - a[j][0])
	  rb = mb - 1;
	else lb = mb + 1;
      }
    }
  }
  cout << "IMPOSSIBLE";

  return 0;
}

