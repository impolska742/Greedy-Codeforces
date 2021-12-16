// Problem Link
// A. C+=
// https://codeforces.com/problemset/problem/1368/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define o1(x) cout<<x<<'\n'
#define o2(x,y) cout<<x<<" "<<y<<"\n";
#define o3(x,y,z) cout<<x<<" "<<y<<" "<<z<<'\n'
#define o4(p,q,r,s) cout<<p<<" "<<q<<" "<<r<<" "<<s<<'\n'

ll minOperations(ll a, ll b, ll n) {
	ll ans = 0;

	while (a <= n and b <= n) {
		if (a < b) {
			a += b;
		} else {
			b += a;
		}

		ans++;
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
		ll a, b, n;
		cin >> a >> b >> n;

		cout << minOperations(a, b, n) << "\n";
	}
	return 0;
}