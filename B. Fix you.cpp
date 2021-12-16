// Problem Link
// B. Fix You
// https://codeforces.com/problemset/problem/1391/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define o1(x) cout<<x<<'\n'
#define o2(x,y) cout<<x<<" "<<y<<"\n";
#define o3(x,y,z) cout<<x<<" "<<y<<" "<<z<<'\n'
#define o4(p,q,r,s) cout<<p<<" "<<q<<" "<<r<<" "<<s<<'\n'

ll minMoves(vector<vector<char>> &matrix, int n, int m) {
	if (n == 1 and m == 1)  return 0;
	bool flag = false;
	int moves = 0;
	for (int i = 0; i < n - 1; i++) {
		if (matrix[i][m - 1] == 'R') moves++;
	}

	for (int j = 0; j < m - 1; j++) {
		if (matrix[n - 1][j] == 'D') moves++;
	}
	return moves;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<vector<char>> matrix(n, vector<char> (m));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> matrix[i][j];
			}
		}


		cout << minMoves(matrix, n, m) << "\n";
	}
	return 0;
}