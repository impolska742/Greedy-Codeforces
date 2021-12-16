#include<iostream>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, m;
	cin >> n, m;
	int val;
	if (n > m) {
		val = m;
	}
	else {
		val = n;
	}
	if (val % 2 == 0) {
		cout << "Malvika";
	}
	else {
		cout << "Akshat";
	}
}