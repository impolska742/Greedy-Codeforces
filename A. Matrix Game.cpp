// Problem Link
// https://codeforces.com/contest/1365/problem/A
// A. Matrix Game

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define o1(x) cout<<x<<'\n'
#define o2(x,y) cout<<x<<" "<<y<<"\n";
#define o3(x,y,z) cout<<x<<" "<<y<<" "<<z<<'\n'

bool check(vector<vector<ll>> &matrix, ll row, ll col) {
	ll n = matrix.size();
	ll m = matrix[0].size();

	// check for row
	for (int i = 0; i < n; i++) {
		if (matrix[i][col] == 1) return false;
	}

	// check for col
	for (int j = 0; j < m; j++) {
		if (matrix[row][j] == 1) return false;
	}

	return true;
}

void debug(vector<vector<ll>> &matrix, ll n, ll m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

string winner(vector<vector<ll>> &matrix, ll n, ll m) {
	ll cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] == 1) {
				break;
			} else {
				if (check(matrix, i, j)) {
					matrix[i][j] = 1;
					cnt++;
					break;
				}
			}
		}

	}

	// debug(matrix, n, m);

	// odd
	if (cnt % 2 != 0) return "Ashish";
	// even
	else return "Vivek";
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		ll n, m; cin >> n >> m;
		vector<vector<ll>> matrix(n, vector<ll> (m));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> matrix[i][j];
			}
		}

		cout << winner(matrix, n, m) << endl;
	}
	return 0;
}