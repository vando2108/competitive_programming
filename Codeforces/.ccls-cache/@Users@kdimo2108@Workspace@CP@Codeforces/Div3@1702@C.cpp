#include <ios>
#include <iostream>
#include <map>

using namespace std;

void kdimo() {
  int n, k;  cin >> n >> k;

  map<int, int> mx, mi;
  for (int i = 1; i <= n; i++) {
    int x;  cin >> x;

    if (!mx[x]) mx[x] = i;
    else mx[x] = max(mx[x], i);

    if (!mi[x]) mi[x] = i;
    else mi[x] = min(mi[x], i);
  }

  while (k--) {
    int a, b;  cin >> a >> b;
    if (!mi[a] || !mx[b]) {
      cout << "NO\n";
      continue;
    }
    
    if (mi[a] < mx[b]) {
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

  int testCase;
  cin >> testCase;

  while (testCase--) {
    kdimo();
  }

  return 0;
}
