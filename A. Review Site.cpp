// Problem Link
// A. Review Site
// https://codeforces.com/problemset/problem/1511/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define o1(x) cout<<x<<'\n'
#define o2(x,y) cout<<x<<" "<<y<<"\n";
#define o3(x,y,z) cout<<x<<" "<<y<<" "<<z<<'\n'
#define o4(p,q,r,s) cout<<p<<" "<<q<<" "<<r<<" "<<s<<'\n'

ll maxUpvotes(vector<int> &viewers, int n) {
	ll ans = 0;
	for (auto &type : viewers) {
		if (type == 1 or type == 3) ans++;
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
		int n;
		cin >> n;

		vector<int> viewers(n, 0);
		for (auto &type : viewers)
			cin >> type;

		cout << maxUpvotes(viewers, n) << "\n";
	}
	return 0;
}