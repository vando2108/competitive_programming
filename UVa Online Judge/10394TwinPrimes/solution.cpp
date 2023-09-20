#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

const int N = (int)2e7;

vector<pair<int, int>> twin_primes;

void eratos() {
  vector<bool> is_prime(N + 10, true);
  is_prime[0] = is_prime[1] = false;

  for (int i = 2; i * i <= N; ++i) {
    if (is_prime[i]) {
      for (int j = i * i; j <= N; j += i) {
        is_prime[j] = false;
      }
    }
  }

  int last = -1;
  for (int i = 2; i <= N; ++i) {
    if (is_prime[i]) {
      if (last + 2 == i) {
        twin_primes.push_back({last, i});
      }
      last = i;
    }
  }
}

void solve(int n) {
  printf("(%d, %d)\n", twin_primes[n - 1].first, twin_primes[n - 1].second);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  eratos();

  int n;
  while (cin >> n) {
    solve(n);
  }

  return 0;
}

