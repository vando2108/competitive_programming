#include <bits/stdc++.h>

using namespace std;

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, 1, -1};

string s;
int ans = 0;
bool vis[7][7];

bool inSide(int u, int v) {
  return (u >= 0 && u < 7 && v >= 0 && v < 7 && !vis[u][v]);
}

void dfs(int i, int u, int v) {
  if (u == 6 && v == 0) {
    ans += (i == (int)s.size());
    return;
  }
  vis[u][v] = true;
  if (s[i] == '?' || s[i] == 'L') {
    if (v > 0 && !vis[u][v - 1])
      if (!(!inSide(u, v - 2) && inSide(u + 1, v - 1) && inSide(u - 1, v - 1)))
        dfs(i + 1, u, v - 1);
  }
  if (s[i] == '?' || s[i] == 'R') {
    if (v < 6 && !vis[u][v + 1]) 
      if (!(!inSide(u, v + 2) && inSide(u + 1, v + 1) && inSide(u - 1, v + 1)))
	dfs(i + 1, u, v + 1);
  }
  if (s[i] == '?' || s[i] == 'U') {
    if (u > 0 && !vis[u - 1][v]) 
      if (!(!inSide(u - 2, v) && inSide(u - 1, v + 1) && inSide(u - 1, v - 1)))
	dfs(i + 1, u - 1, v);
  }
  if (s[i] == '?' || s[i] == 'D') {
    if (u < 6 && !vis[u + 1][v]) 
      if (!(!inSide(u + 2, v) && inSide(u + 1, v + 1) && inSide(u + 1, v - 1)))
	dfs(i + 1, u + 1, v);
  }
  vis[u][v] = false;
}

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  cin >> s;
  memset(vis, false, sizeof(vis));
  dfs(0, 0, 0);
  cout << ans;

  return 0;
}

