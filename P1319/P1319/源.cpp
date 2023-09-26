#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[201][201] = { 0 }, n, k, sum = 2;
	cin >> n;
	int i = 1, j = 1;
	while(cin>>k){
		if(sum++%2)
			for(k;k>0;k--) {
				if (j % (n + 1) == 0) {					//»»ÐÐ
					j = 1;
					i++;
				}
				a[i][j++] = 1;
			}
			else 	for (k; k > 0; k--) {
						if (j % (n+1)==0) {					//»»ÐÐ
							j = 1;
							i++;
						}
						a[i][j++] = 0;
					}
		if (cin.get() == '\n') break;
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			cout << a[i][j];
		cout << endl;
	}
}