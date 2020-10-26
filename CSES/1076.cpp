#include <bits/stdc++.h>
#include <functional>
 
using namespace std;
 
const int N = (int)2e5 + 10;
 
int n, k, a[N];
long long lSum = 0, uSum = 0;
set<array<int, 2>> lower, upper;
 
void fix() {
  while (lower.size() > upper.size()) {
    auto it = --(lower.end());
    lower.erase(it);
    lSum -= (*it)[0];
    upper.insert(*it);
    uSum += (*it)[0];
  }
  while (upper.size() > k / 2 + (k & 1)) {
    auto it = upper.begin();
    lSum += (*it)[0];
    lower.insert({(*it)[0], (*it)[1]});
    uSum -= (*it)[0];
    upper.erase(it);
  }
}
 
int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
     freopen("input.inp", "r", stdin);
  #endif 
 
  cin >> n >> k;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 1; i <= k; i++) 
    lower.insert({a[i], i}), lSum += a[i];
  fix();
  array<int, 2> mid;
  if (k & 1) 
    mid = *upper.begin();
  else 
    mid = *(--(lower.end()));
  cout << mid[0] * lower.size() - lSum + uSum - mid[0] * upper.size() << ' ';
  for (int i = k + 1; i <= n; i++) {
    if (a[i] < mid[0]) lower.insert({a[i], i}), lSum += a[i];
    else upper.insert({a[i], i}), uSum += a[i];
    if (lower.count({a[i - k], i - k})) {
      lower.erase({a[i - k], i - k}), lSum -= a[i - k];
    }
    else upper.erase({a[i - k], i - k}), uSum -= a[i - k];
    fix();
    if (k & 1) 
      mid = *upper.begin();
    else 
      mid = *(--(lower.end()));
    cout << mid[0] * lower.size() - lSum + uSum - mid[0] * upper.size() << ' ';
  }
 
  return 0;
}
