#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
  long long n;
  cin >> n;

  long long i = 2, result = 1;
  while (i * i <= n) {
    if (n % i == 0) result *= i;
    while (n % i == 0) {
      n /= i;
    }
    ++i;
  }

  if (n != 1) {
    result *= n;
  }

  cout << result;
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

