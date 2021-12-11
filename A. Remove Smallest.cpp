// Problem Link
// https://codeforces.com/contest/1399/problem/A
// A. Remove Smallest

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool canConvert(vector<ll> &arr, ll n) {
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n - 1; i++) {
		if (abs(arr[i] - arr[i + 1]) > 1) return false;
	}
	return true;
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
		canConvert(arr, n) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}