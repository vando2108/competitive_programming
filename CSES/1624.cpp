#include <algorithm>
#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int ans = 0, mask[20];
string isBlocked[8];

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  for (int i = 0; i < 8; i++) {
    cin >> isBlocked[i];
  }
  vector<int> pos(8, 0);
  for (int i = 0; i < 8; i++) pos[i] = i; 
  do {
    bool ok = true;
    for (int i = 0; i < 8; i++) {
      ok &= (!(isBlocked[i][pos[i]] == '*'));
    } 
    memset(mask, 0, sizeof(mask));
    for (int i = 0; i < 8; i++) {
      ok &= (mask[i + pos[i]] == 0);
      mask[i + pos[i]]++;
    }
    memset(mask, 0, sizeof(mask));
    for (int i = 0; i < 8; i++) {
      ok &= (!mask[7 - (i - pos[i])]);
      mask[7 - (i - pos[i])]++;
    }
    ans += ok;
  } while (next_permutation(pos.begin(), pos.end()));
  cout << ans;

  return 0;
}

