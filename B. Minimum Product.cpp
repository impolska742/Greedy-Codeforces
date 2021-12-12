// Problem Link
// https://codeforces.com/problemset/problem/1409/B
// B. Minimum Product

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define o1(x) cout<<x<<'\n'
#define o2(x,y) cout<<x<<" "<<y<<"\n";
#define o3(x,y,z) cout<<x<<" "<<y<<" "<<z<<'\n'

ll minMoves(ll a, ll b, ll x, ll y, ll n) {
	ll ans = 1e18;
	if (a == x and b == y) return x * y;
	if (a == x) {
		if (n >= b - y) return x * y;
		else {
			return x * (b - n);
		}
	} else if (b == y) {
		if (n >= a - x) return x * y;
		else {
			return (a - n) * y;
		}
	} else {
		if (n >= (a - x) + (b - y)) {
			return x * y;
		}

		// doing all the operations in first element
		if (n >= (a - x)) {
			ll remaining = n - (a - x);
			if (remaining >= 0) {
				ans = x * (b - remaining);
			}
			// o2(ans, remaining);
		} else if (n < (a - x)) {
			ans = min(ans, (a - n) * b);
		}

		// doing all the operations in second element
		if (n >= (b - y)) {
			ll remaining = n - (b - y);
			if (remaining >= 0) {
				ans = min(ans, (a - remaining) * y);
			}
			// o2(ans, b);
		} else if (n < (b - y)) {
			ans = min(ans, a * (b - n));
		}
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
		ll x, y, a, b, n;
		cin >> a >> b >> x >> y >> n;
		cout << minMoves(a, b, x, y, n) << endl;
	}
	return 0;
}