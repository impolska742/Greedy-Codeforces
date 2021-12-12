// Problem Link
// B. Restore the Permutation by Merger
// https://codeforces.com/problemset/problem/1385/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void restorePermutation(vector<ll> &arr, ll n) {
	vector<bool> visited(n + 1, false);
	for (int i = 0; i < arr.size(); i++) {
		if (visited[arr[i]] == false) {
			cout << arr[i] << " ";
			visited[arr[i]] = true;
		}
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		vector<ll> arr(n * 2);

		for (int i = 0; i < n + n; i++) {
			cin >> arr[i];
		}

		restorePermutation(arr, n);
	}
	return 0;
}