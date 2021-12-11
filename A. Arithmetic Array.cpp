// Problem Link
// https://codeforces.com/contest/1537/problem/A
// A. Arithmetic Array

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll minOperations(vector<ll> &arr, ll n) {
	ll sum = accumulate(arr.begin(), arr.end(), 0);
	if (sum / n == 1 and sum % n == 0) return 0;
	if (sum < 0) return 1;
	else {
		ll diff = sum - n;
		if (diff < 0) return 1;
		else if (diff == 0) {
			return 1;
		} else {
			return diff;
		}
	}
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

		cout << minOperations(arr, n) << endl;
	}

	return 0;
}