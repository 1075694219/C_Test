#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, num[200001] = { 0 }, b;
	double a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		for (int j = 1; j <= b; j++) {
			if (!num[int(j * a)]) num[int(j * a)] = 1;
			else num[int(j * a)] = 0;
		}
	}
	for (int i = 1;; i++) {
		if (num[i] == 1) {
			cout << i;
			return 0;
		}
	}
	return 0;
}