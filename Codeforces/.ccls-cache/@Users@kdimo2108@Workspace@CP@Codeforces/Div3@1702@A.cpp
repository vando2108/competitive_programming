#include <iostream>
#include <vector>

using namespace std;

vector<int> power_10(1, 1);

void kdimo() {
  int n;  cin >> n;
  int res = 0;

  for (int i = 0; i < 10; i++) {
    if (n >= power_10[i]) {
      res = n - power_10[i];
    }
  }
  
  cout << res << '\n';
}

int main() {
  for (int i = 1; i < 10; i++) {
    power_10.push_back(power_10.back() * 10);
  }

  int testCase;
  cin >> testCase;

  while (testCase--) {
    kdimo();
  }

  return 0;
}
