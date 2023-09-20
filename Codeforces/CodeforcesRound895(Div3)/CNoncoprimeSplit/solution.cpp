// Copyright 2023-09-07 21:52:18 Do Vu

#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

const int N = (int)1e7;
vector<int> min_prime(N + 10, 0);

vector<pair<int, int>> prime_factorization(int x) {
  unordered_map<int, int> cnt;
  while (x != 1) {
    if (min_prime[x] == 0) {
      ++cnt[x];
      x = 1;
    } else {
      ++cnt[min_prime[x]];
      x /= min_prime[x];
    }
  }

  vector<pair<int, int>> res(cnt.begin(), cnt.end());
  return res;
}

void prime_factor() {
  for (int i = 2; i * i <= N; ++i) {
    if (min_prime[i] == 0) {
      for (int j = i * i; j <= N; j += i) {
        if (min_prime[j] == 0) {
          min_prime[j] = i;
        }
      }
    }
  }
}

void solve() {
  int l, r;
  cin >> l >> r;

  while (r >= l) {
    if (min_prime[r] != 0) {
      cout << min_prime[r] << ' ' << r - min_prime[r] << '\n';
      return;
    }
    --r;
  }

  cout << -1 << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  prime_factor();

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
