// Problem Link
// A. Road To Zero
// https://codeforces.com/problemset/problem/1342/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll minMoves(ll x, ll y, ll a, ll b) {
	if (x == 0) return y * a;
	if (y == 0) return x * a;
	ll ans = x * a + y * a;
	if ((x < 0 and y > 0) or (x > 0 and y < 0)) return ans;
	return min(ans, (min(x, y) * b) + (max(x, y) - min(x, y)) * a);
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		ll x, y, a, b;
		cin >> x >> y >> a >> b;
		cout << minMoves(x, y, a, b) << endl;
	}
	return 0;
}