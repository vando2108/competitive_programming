#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  int t;  cin >> t;
  while (t--) {
    int a, b;  cin >> a >> b;
    if (a > b) swap(a, b);
    //a is less than b
    while (!(a == b || abs(a - b) == 1) && a != 0) {
      int temp = (b - a) / 2;
      a -= temp, b -= temp * 2;
      if (a > b) swap(a, b);
    }
    if (a < 0) cout << "NO";
    else {
      if (a == 0 && b != 0) cout << "NO";
      else if (a % 3 == 0 && b % 3 == 0) cout << "YES";
      else if (a % 3 == 1 && b % 3 == 2) cout << "YES";
      else cout << "NO";
    }
    cout << '\n';
  }

  return 0;
}

