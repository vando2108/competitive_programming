#include <algorithm>
#include <deque>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int n, k1, k2;
  vector<deque<int>> desk(2, deque<int>());

  cin >> n;
  cin >> k1;
  for (int i = 0; i < k1; ++i) {
    int x; cin >> x;
    desk[0].push_back(x);
  }

  cin >> k2;
  for (int i = 0; i < k2; ++i) {
    int x; cin >> x;
    desk[1].push_back(x);
  }

  for (int i = 0; i < 1000; ++i) {
    if (desk[0].size() == 0 || desk[1].size() == 0) {
      cout << i << ' ' << ((desk[0].size() == 0) ? 2 : 1);
      return;
    }

    int desk_0 = desk[0].front(), desk_1 = desk[1].front();
    desk[0].pop_front();
    desk[1].pop_front();

    if (desk_0 > desk_1) {
      desk[0].push_back(desk_1);
      desk[0].push_back(desk_0);
    } else {
      desk[1].push_back(desk_0);
      desk[1].push_back(desk_1);
    }
  }

  cout << -1;
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
