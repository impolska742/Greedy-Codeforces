// Problem Link
// https://codeforces.com/problemset/problem/1366/A
// A. Shovels and Swords

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll maxEmeralds(ll A, ll B) {
	ll a = A, b = B;
	ll ta = A, tb = B;
	ll ans = 0;
	if ((a == 0 or b == 0) or (a <= 1 and b <= 1))
		return 0;

	if (b > a) swap(a, b);

	if ((a / 2) >= b) return b;

	if (a > b) {
		ll diff = a - b;
		ans = diff;
		a = a - (2 * diff);
		b = b - diff;
	}

	if (a == b) {
		ans += (min(a, b) / 3) * 2;
		a = a % 3;
		b = b % 3;
		if ((a == 2 and b >= 1) or (b == 2 and a >= 1)) ans++;
	}

	return ans;
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

		cout << maxEmeralds(a, b) << "\n";
	}

	return 0;
}