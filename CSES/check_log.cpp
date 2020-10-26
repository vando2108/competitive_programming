#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;

int testCase;
vector <ii> test_input;
vector <string> result;

void LoadInput() {
  freopen("test_input.txt", "r", stdin);
  cin >> testCase;
  for (int iTest = 1; iTest <= testCase; iTest++) {
    int a, b;  cin >> a >> b;
    test_input.push_back(ii(a, b));
  }
}

void LoadResult() {
  freopen("test_output.txt", "r", stdin);
  for (int iTest = 1; iTest <= testCase; iTest++) {
    string x;  cin >> x;
    result.push_back(x);
  } 
}

void CheckAnswer() {
  freopen("user_output.txt", "r", stdin);
  for (int iTest = 0; iTest < testCase; iTest++) {
    string x;  cin >> x;
    if (result[iTest] != x) {
      cout << "Wa Test: " << iTest << '\n';
      cout << test_input[iTest].first << ' ' << test_input[iTest].second << '\n';
      cout << "Yuri answer: " << result[iTest] << '\n';
      cout << "User answer: " << x << '\n';
      cout << "------------------------------------" << '\n';
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  
  LoadInput();  
  LoadResult();
  CheckAnswer();

  return 0;
}

