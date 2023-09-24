#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
  string s;
  cin >> s;
  int cnt = s[0] != 'a';
  cnt += s[1] != 'b';
  cnt += s[2] != 'c';

  if (cnt == 2 || cnt == 0) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
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
