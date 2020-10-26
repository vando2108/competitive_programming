#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int cnt[26];

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  string s;  cin >> s;
  for (int i = 0; i < (int)s.size(); i++) {
    cnt[s[i] - 'A']++;
  }
  const int n = (int)s.size();
  if ((int)s.size() & 1) {
    int i = 0;
    for (; i < 26; i++) {
      if (cnt[i] & 1) break;
    }
    string ans = "";
    for (int j = 0; j < 26; j++) {
      if (cnt[j] % 2 == 0) {
	for (int k = 1; k <= cnt[j] / 2; k++) {
	  ans += char(j + 'A');
	} 
      }
      else if (i != j) {
	cout << "NO SOLUTION";
	return 0;
      }
    }
    cout << ans;
    while (cnt[i] != 0) {
      cout << char(i + 'A');
      cnt[i]--;
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
  }
  else {
    string ans = "";
    for (int i = 0; i < 26; i++) {
      if (cnt[i] & 1) {
	cout << "NO SOLUTION";
	return 0;
      }
      for (int j = 1; j <= cnt[i] / 2; j++) {
	ans += char(i + 'A');
      }
    }
    cout << ans;
    reverse(ans.begin(), ans.end());
    cout << ans;
  }

  return 0;
}

