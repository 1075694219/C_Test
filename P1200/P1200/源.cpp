#include<bits/stdc++.h>
using namespace std;
int main() {
	string a, b;
	int m=1, n=1;
	cin>>a>>b;
	for (int i = 0; i < a.length(); i++)
		m *= (a[i]-64);
	for (int i = 0; i < b.length(); i++)
		n *= (b[i] - 64);
	if (m % 47 == n % 47)	cout << "GO";
	else cout << "STAY";
}