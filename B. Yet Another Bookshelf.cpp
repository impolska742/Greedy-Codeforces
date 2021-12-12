// Problem Link
// B. Yet Another Bookshelf
// https://codeforces.com/problemset/problem/1433/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define o1(x) cout<<x<<'\n'
#define o2(x,y) cout<<x<<" "<<y<<"\n";
#define o3(x,y,z) cout<<x<<" "<<y<<" "<<z<<'\n'

ll minMoves(vector<ll> &arr, ll n) {
	ll ans = 0;
	ll prev = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] == 1) {
			prev = i;
			break;
		}
	}

	if (prev == -1) return 0;

	for (int i = prev + 1; i < n; i++) {
		if (arr[i] != 1) {
			for (int j = i; j < n; j++) {
				if (arr[j] == 1) {
					// o2(prev, j);
					ans += (j - prev - 1);
					i = prev = j;
					break;
				}
			}
		}
		else prev = i;
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
		ll n; cin >> n;
		vector<ll> arr(n);

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		cout << minMoves(arr, n) << endl;
	}
	return 0;
}