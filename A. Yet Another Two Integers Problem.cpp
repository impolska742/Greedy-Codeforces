// Problem Link
// https://codeforces.com/problemset/problem/1409/A
// A. Yet Another Two Integers Problem

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll minMoves(ll a, ll b) {
	ll diff = abs(a - b);
	return (diff + 9) / 10;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		ll a, b;
		cin >> a >> b;
		cout << minMoves(a, b) << endl;
	}
	return 0;
}