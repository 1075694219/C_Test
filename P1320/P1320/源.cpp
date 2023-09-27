#include<bits/stdc++.h>
using namespace std;
int r,sum,n;
int main() {
	char a[201][201];
	while (cin >> a[r])
		r++;
	cout << r;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < r; j++) {
			if (a[i][j] == '0') {
				if (n == 1) {
					cout << " " << sum;
					n  = 0;
					sum = 0;
				}
				sum++;
			}
			else {
				if (n == 0) {
					cout << " " << sum;
					n = 1;
					sum = 0;
				}
				sum++;
			}
		}
	}
	if (sum > 0)
		cout << " " << sum;
}