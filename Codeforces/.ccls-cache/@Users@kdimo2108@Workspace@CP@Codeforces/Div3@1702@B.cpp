#include <iostream>
#include <vector>
#include <map>

using namespace std;

void kdimo() {
  string s;  cin >> s;
  
  int days = 1;
  vector<char> chr;

  for (auto c: s) {
    bool isExists = false;
    for (auto i: chr) {
      if (i == c) isExists = true;
    }

    if (!isExists) {
      if (chr.size() == 3) {
        chr.clear();
        days++;
      }
      chr.push_back(c);
    }
  }

  cout << days << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);

  int testCase;
  cin >> testCase;
  while (testCase--) {
    kdimo();
  }

  return 0;
}
