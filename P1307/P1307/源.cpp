#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,a[11],b=0;
	cin >> n;
	if (n == 0) { 
		cout << 0;
		return 0;
	}
	while (n % 10 == 0) n /= 10;
	if (n < 0) {
		cout << '-';
		n *= -1;
	}
	while (n != 0) {
		a[b++] = n % 10;
		n /= 10;
	}
	for (int i = 0; i < b; i++)
		cout << a[i];
} 