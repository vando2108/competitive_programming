#include <algorithm>
#include <iostream>
#include <numeric>
#include <unordered_map>
#include <vector>
#include <map>

using namespace std;

void solve() {
  int a, b;
  cin >> a >> b;

  // 15: 3 * 5
  // 20: 2 ^ 2 * 5

  int result = 0;
  for (auto x : {2, 3, 5}) {
    int temp = 0;
    while (a % x == 0) {
      a /= x;
      ++temp;
      ++result;
    }

    int temp2 = 0;
    while (b % x == 0) {
      b /= x;
      ++temp2;
      ++result;
    }

    result -= 2 * min(temp, temp2);
  }

  if (a != b) {
    cout << -1;
  } else {
    cout << result; 
  }
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

