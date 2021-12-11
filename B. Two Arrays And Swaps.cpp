// Problem Link
// https://codeforces.com/contest/1353/problem/B
// B. Two Arrays And Swaps

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debugVector(v) for(int i = 0; i < v.size(); i++) cout << v[i] << " "; cout << endl;

ll maxSum(vector<ll> &A, vector<ll> &B, ll n, ll k) {
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	ll i = 0, j = n - 1;
	ll cnt = 0;

	while (i < n and j >= 0) {
		if (cnt == k) break;
		if (A[i] < B[j]) {
			ll temp = A[i];
			A[i] = B[j];
			B[j] = temp;
			cnt++;
			j--;
		}
		i++;
	}
	// debugVector(A);
	ll sum = accumulate(A.begin(), A.end(), 0);
	return sum;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		ll n, k; cin >> n >> k;
		vector<ll> A(n), B(n);
		for (int i = 0; i < n; i++) cin >> A[i];
		for (int i = 0; i < n; i++) cin >> B[i];
		cout << maxSum(A, B, n, k) << endl;
	}

	return 0;
}