// Problem Link
// https://codeforces.com/problemset/problem/1360/B
// B. Honest Coach

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll minDiff(vector<ll> &arr, ll n) {
	ll mn = INT_MAX;
	for (int i = 0; i < n - 1; i++) {
		mn = min(mn, arr[i + 1] - arr[i]);
	}

	return mn;
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
		vector<ll> arr(n);
		for (int i = 0; i < n; i++) cin >> arr[i];
		sort(arr.begin(), arr.end());

		cout << minDiff(arr, n) << endl;
	}

	return 0;
}