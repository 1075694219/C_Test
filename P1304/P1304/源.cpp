#include<bits/stdc++.h>
using namespace std;
int Prime(int n) {
	for (int i=2; i < n; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}
int main() {
	int n;
	cin >> n;
	for (int i = 4; i <= n; i += 2) {
		cout << i << '=';
		for (int j = 2; j < i; j++) {
			if (Prime(j) && Prime(i - j)) {
				cout << j << '+' << i - j << endl;
				break;
			}
		}
	}
}