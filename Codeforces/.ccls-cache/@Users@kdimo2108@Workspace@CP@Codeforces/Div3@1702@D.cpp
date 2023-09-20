#include <ios>
#include <iostream>
#include <vector>

using namespace std;

void kdimo() {
  string s;
  cin >> s;
  int p;
  cin >> p;

  int value = 0;
  vector<vector<int> > a(26, vector<int>());
  for (int i = 0; i < (int)s.size(); i++) {
    a[s[i] - 'a'].push_back(i);
    value += s[i] - 'a' + 1;
  }

  vector<int> deleted;
  while (value > p) {
    for (int i = 25; i >= 0; i--) {
      if (a[i].size()) {
        deleted.push_back(a[i].back());
        a[i].pop_back();
        value -= (i + 1);
        break;
      }
    }
  }

  sort(deleted.begin(), deleted.end());
  deleted.push_back((int)s.size() + 1);
  
  int j = 0;
  for (int i = 0; i < (int)s.size(); i++) {
    if (deleted[j] == i) {
      j++;
      continue;
    }
    else cout << s[i];
  }
  cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int testCase;
  cin >> testCase;

  while (testCase--) {
    kdimo();
  }

  return 0;
}
