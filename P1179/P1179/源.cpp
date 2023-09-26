#include<bits/stdc++.h>
using namespace std;
int main() {
	int sum=0, L, R, n;
	cin>>L>>R;
	for (int i = L; i <= R; i++) {
		if (i / 10000 == 2) sum++;
		if (i / 1000%10 == 2) sum++;
		if (i / 100%10 == 2) sum++;
		if (i / 10%10 == 2) sum++;
		if (i %10 == 2) sum++;
	}
	cout << sum;
	return 0;
}