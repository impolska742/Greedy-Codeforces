// Problem Link
// https://codeforces.com/problemset/problem/1373/A
// A. Donut Shops

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

pair<ll, ll> maxDonuts(ll a, ll b, ll c) {
	ll x = -1, y = -1;

	if (c <= a) {
		return { -1, b};
	}

	if (a < c) {
		if (a * b > c) return {1, b};
		else  return {1, -1};
	}

	return {x, y};
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		ll a, b, c;
		cin >> a >> b >> c;

		pair<ll, ll> ans = maxDonuts(a, b, c);
		cout << ans.first << " " << ans.second << "\n";
	}

	return 0;
}