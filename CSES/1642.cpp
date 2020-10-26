#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

const int N = (int)1e3 + 10;
typedef pair<int, int> ii;

int n;
long long x, a[N];

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 

  cin >> n >> x;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  map<int, array<int, 2>> mp;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (mp.find(x - a[i] - a[j]) != mp.end()) {
	auto temp = mp[x - a[i] - a[j]];
	cout << temp[0] + 1 << ' ' << temp[1] + 1 << ' ' << i + 1 << ' ' << j + 1;
	return 0;
      }
    }
    for (int j = 0; j < i; j++)
      mp[a[i] + a[j]] = {i, j};
  }
  cout << "IMPOSSIBLE";

  return 0;
}
