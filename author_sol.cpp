#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// sort the array in non-decreasing order
		sort(a.begin(), a.end());
		vector<int> b;
		// in this loop, store the unique elements
		for (int i = 0; i < n; i++) {
			if (i == 0 || a[i] != a[i - 1]) {
				b.emplace_back(a[i]);
			}
		}
		// in this loop, store the duplicate elements
		for (int i = 0; i < n; i++) {
			if (i > 0 && a[i] == a[i - 1]) {
				b.emplace_back(a[i]);
			}
		}
		for(int i = 0; i < (int) b.size(); i++) {
			cout << b[i] << " ";
		}
		cout << '\n';
	}
	return 0;
}
