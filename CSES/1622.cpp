#include <bits/stdc++.h>

using namespace std;

string s;
vector<string> result;

void generation(int i, string buffer, vector<int> cnt) {
  if (i == (int)s.size()) {
    result.push_back(buffer);
    return;
  }  
  for (int j = 0; j < 26; j++) {
    if (cnt[j] > 0) {
      cnt[j]--;
      generation(i + 1, buffer + char(j + 'a'), cnt);
      cnt[j]++;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  vector<int> cnt(26, 0);
  cin >> s;
  for (int i = 0; i < (int)s.size(); i++) {
    cnt[s[i] - 'a']++;
  }
  generation(0, "", cnt);
  cout << (int)result.size() << '\n';
  for (int i = 0; i < (int)result.size(); i++) {
    cout << result[i] << '\n';
  }

  return 0;
}

