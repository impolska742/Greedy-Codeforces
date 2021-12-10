// Problem Link
// https://codeforces.com/problemset/problem/1353/A
// A. Most Unstable Array

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll maxValue(ll n, ll m) {
	if (n == 1) return 0;
	if (n == 2) return m;
	return 2 * m;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		ll n, m;
		cin >> n >> m;

		cout << maxValue(n, m) << endl;
	}
	return 0;
}