#include <algorithm>
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

long long distance(int i, int j, const vector<pair<int, int>> &cities, int k) {
  if (i < k && j < k) {
    return 0;
  }
  return abs(cities[i].first - cities[j].first) * 1LL + abs(cities[i].second - cities[j].second);
}

void solve() {
  int n, k, a, b;
  cin >> n >> k >> a >> b;
  --a, --b;

  vector<pair<int, int>> cities(n);
  for (auto &it : cities) {
    cin >> it.first >> it.second;
  }

  int b_min = n, a_min = n;
  for (int i = 0; i < k; ++i) {
    if (b_min == n || distance(i, b, cities, k) < distance(b, b_min, cities, k)) {
      b_min = i;
    }
    if (a_min == n || distance(i, a, cities, k) < distance(a, a_min, cities, k)) {
      // cout << "> " << a_min << ' ' << i << '\n';
      // cout << ">> " << distance(i, a, cities, k) << ' ' << distance(a, a_min, cities, k) << '\n';
      a_min = i;
    }
  }

  cout << min(distance(a, b, cities, k), distance(a_min, a, cities, k) + distance(b, b_min, cities, k)) << '\n';
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

