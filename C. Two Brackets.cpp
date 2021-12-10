// Problem Link
// https://codeforces.com/problemset/problem/1452/C
// Two Brackets

#include <bits/stdc++.h>
using namespace std;

int twoBrackets(string s) {
	int count = 0;
	int c1 = 0, c2 = 0;

	for (auto ch : s) {
		if (ch == '(') c1++;
		else if (ch == '[') c2++;
		else {
			if (ch == ')') {
				if (c1 > 0) {
					c1--;
					count++;
				}
			} else {
				if (c2 > 0) {
					c2--;
					count++;
				}
			}
		}
	}

	return count;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		string s;
		cin >> s;

		cout << twoBrackets(s) << endl;
	}
	return 0;
}