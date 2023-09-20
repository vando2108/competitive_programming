/**
 * @author      : kdimo2108
 * @created     : 03/10/2022
 * @filename    : 814B
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void kdimo() {
  int n;  cin >> n;
  vector<int> a(n, 0), b(a);
  for (auto &it: a) cin >> it;
  for (auto &it: b) cin >> it;

  vector<vector<int> > cnt(n + 1);
  for (int i = 0; i < n; i++) {
    cnt[a[i]].push_back(i);
  }

  int dupicate = 0, miss = 0;
  for (int i = 1; i <= n; i++) {
    if (cnt[i].size() == 2) dupicate = i;
    if (cnt[i].size() == 0) miss = i;
  }

  for (int i = 0; i < cnt[dupicate].size(); i++) {
    a[ cnt[dupicate][i] ] = miss;

    int diff = 0;
    for (int j = 0; j < n; j++) {
      diff += (a[j] != b[j]);
    }

    if (diff == 1) {
      for (auto it: a) cout << it << ' ';
      return;
    }

    a[ cnt[dupicate][i] ] = dupicate;
  }
}

int main() {
	ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifdef LOCAL 
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout); 
  #endif

	int testCase;  
	//cin >> testCase;
	testCase = 1;
	while (testCase--) {
		kdimo();
	}

	return 0;
}

