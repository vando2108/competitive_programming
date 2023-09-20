#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(nullptr); cout.tie(nullptr);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &it: a) cin >> it;

    for (int mask = 0; mask < (1 << n); mask++) {
      int gcd = 0;
      for (int i = 0; i < n; i++) {
        int temp;
        if (mask & (1 << i)) {
          temp = __gcd(a[i], i + 1);
        }
      }
    }
  }

  return 0;
}
