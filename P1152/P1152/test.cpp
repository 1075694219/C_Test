#include<bits/stdc++.h>
using namespace std;
int main() {
	int num[1001] = { 0 };
	int sum[1000] = { 0 };
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> num[i];
	for (int i = 0; i < n - 1; i++) {
		if (abs(num[i] - num[i + 1]) > 1000) {
			cout << "Not jolly";
			return 0;
		}
		sum[abs(num[i] - num[i + 1])] = 1;
	}
	for (int i = 1; i < n; i++)
		if (!sum[i]) {
			cout << "Not jolly";
			return 0;
		}
	cout << "Jolly";
}