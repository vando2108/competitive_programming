#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// constant declare
const int N = (int)1e7;
vector<int> primes;
vector<int> min_prime(N, 0);

// eratos
void eratos() {
  for (int i = 2; i * i <= N; ++i) {
    if (min_prime[i] == 0) {
      for (int j = i * i; j <= N; j += i) {
        if (min_prime[j] == 0) {
          min_prime[j] = i;
        }
      }
    }
  }

  for (int i = 2; i <= N; ++i) {
    if (min_prime[i] == 0) {
      min_prime[i] = i;
      primes.push_back(i);
    }
  }
}

// prime_factorization
vector<pair<int, int>> prime_factorization(int n) {
  vector<pair<int, int>> factors;
  while (n != 1) {
    if (factors.size() && factors.back().first == min_prime[n]) {
      ++factors.back().second;
    } else {
      factors.push_back({min_prime[n], 1});
    }
    n /= min_prime[n];
  }

  return factors;
}

void solve(int n) {
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  eratos();

  int tc = 3, n;

  while (tc--) {
    cin >> n;
    solve(n);
  }

  return 0;
}

