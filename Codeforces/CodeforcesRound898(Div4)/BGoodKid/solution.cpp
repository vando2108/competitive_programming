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

  sort(a.begin(), a.end());
  a[0]++;
  int result = 1;
  for (auto it : a) {
    result *= it;
  }

  cout << result << '\n';
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
