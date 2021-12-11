// Problem Link
// https://codeforces.com/problemset/problem/1392/A
// A. Omkar and Password

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll shortestPassword(vector<ll> &arr, ll n) {
	unordered_set<ll> uset(arr.begin(), arr.end());
	if (uset.size() == 1) return n;
	else return 1;
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

		cout << shortestPassword(arr, n) << endl;
	}

	return 0;
}