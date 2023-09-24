#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
  vector<string> a(10);
  for (auto &it : a) {
    cin >> it;
  }

  int result = 0;
  vector<vector<int>> scores(10, vector<int>(10, 1));
  for (int score = 2; score <= 5; ++score) {
    for (int i = score - 1; i <= 10 - score; ++i) {
      scores[i][score - 1] = score;
      scores[i][10 - score] = score;
      scores[score - 1][i] = score;
      scores[10 - score][i] = score;
    }
  }

  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      if (a[i][j] == 'X') {
        result += scores[i][j];
      }
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
