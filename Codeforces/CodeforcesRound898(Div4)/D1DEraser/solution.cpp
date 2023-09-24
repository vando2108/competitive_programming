#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int result = 0;
  for (int i = 0; i < s.size() - k; ++i) {
    if (s[i] == 'B') {
      result += 1;
      for (int j = 0; j < k - 1; ++j) {
        s[i++] = 'W';
      }
      s[i] = 'W';
    }
  }

  for (int i = s.size() - k; i < s.size(); ++i) {
    if (s[i] == 'B') {
      result += 1;
      break;
    }
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
