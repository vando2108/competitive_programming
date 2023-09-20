#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &it : a) {
    cin >> it;
  }

  if (a.size() & 1) {
    cout << 4 << '\n';
    cout << 1 << ' ' << n << '\n';
    cout << 1 << ' ' << n - 1 << '\n';
    cout << n - 1 << ' ' << n << '\n';
    cout << n - 1 << ' ' << n << '\n';
  } else {
    cout << 2 << '\n';
    cout << 1 << ' ' << n << '\n';
    cout << 1 << ' ' << n << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int tc = 1;
  cin >> tc;

  while (tc--) {
    solve();
  }

  return 0;
}

