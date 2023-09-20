#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<pair<int, int>> a(n);
  for (auto &it : a) {
    cin >> it.first >> it.second;
  }
  sort(a.begin(), a.end());

  map<pair<int, int>, int> both;
  unordered_map<int, int> x, y;

  long long result = 0;
  for (int i = 0; i < n; ++i) {
    result += x[a[i].first] + y[a[i].second] - both[a[i]];

    ++both[a[i]];
    ++x[a[i].first];
    ++y[a[i].second];
  }

  cout << result << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int tc = 1;
  // cin >> tc;

  while (tc--) {
    solve();
 }

  return 0;
}

