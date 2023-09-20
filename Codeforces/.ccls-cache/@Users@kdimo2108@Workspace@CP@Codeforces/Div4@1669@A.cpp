#include <bits/stdc++.h>

using namespace std;

void kdimo() {
	int rating;  cin >> rating;
	if (rating < 1400) {
		cout << "Division 4" << '\n';
	}
	else if (rating < 1600) {
		cout << "Division 3" << '\n';
	} else if (rating < 1900) {
		cout << "Division 2" << '\n';
	} else {
		cout << "Division 1" << '\n';
	}
}

int main() {
	ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

	int testCase;  
	cin >> testCase;
	while (testCase--) {
		kdimo();
	}

	return 0;
}

