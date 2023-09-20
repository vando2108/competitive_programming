// Copyright 2023-09-07 07:28:07 Do Vu

#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  const string convert[] = {"",  "",   "2", "3",    "223",
                            "5", "35", "7", "2227", "3327"};

  string result = "";
  for (auto c : s) {
    result += convert[c - '0'];
  }

  sort(result.begin(), result.end(), [](char a, char b) { return a > b; });

  cout << result;
}

int main() {
#ifdef DEBUG
  freopen("input.txt", "r", stdin);
#endif // DEBUG

  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  // cin >> t;
  t = 1;
  while (t--) {
    solve();
  }

  return 0;
}
