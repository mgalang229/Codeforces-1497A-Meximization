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
		// create two vectors
		// the first vector is for the unique elements in non-decreasing order
		vector<int> mex;
		// the second vector is for the duplicate element also in non-decreasing order
		vector<int> duplicates;
		for (int i = 0; i < n - 1; i++) {
			if (a[i] != a[i + 1]) {
				// if an element is unique, store it in the 'mex' vector
				mex.emplace_back(a[i]);
			} else {
				// otherwise, store it in the 'duplicates' vector
				duplicates.emplace_back(a[i]);
			}
		}
		// check for the extra case wherein the last element is also unique
		if (a[n - 1] != a[n - 2]) {
			// if the last element is unique, then store it in the 'mex' vector
			mex.emplace_back(a[n - 1]);
		} else {
			// otherwise, store it in the 'duplicates' vector
			duplicates.emplace_back(a[n - 1]);
		}
		// sort the two vectors in non-decreasing order
		sort(mex.begin(), mex.end());
		sort(duplicates.begin(), duplicates.end());
		// print the elements in the two vectors
		for (int i = 0; i < (int) mex.size(); i++) {
			cout << mex[i] << " ";
		}
		for (int i = 0; i < (int) duplicates.size(); i++) {
			cout << duplicates[i] << " ";
		}
		cout << '\n';
	}
	return 0;
}
