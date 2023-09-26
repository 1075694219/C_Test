#include<bits/stdc++.h>
using namespace std;
int main() {
	int sum = 0, a[10001], n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 2; i < n; i++) {
		int left = i, right = i;
		if (a[i] > a[i - 1] || a[i] > a[i + 1]) continue;			//相邻左右都低
		if (a[i - 1] > a[i] && a[i + 1] > a[i]) {					//相邻左右都高
			sum++;
			continue;
		}
		while (a[--left] == a[i]) {}										//向左平
		if (a[left] < a[i]) continue;									//左低	else	左高
		while(a[++right]==a[i]){}										//向右平
		if (a[right] < a[i]) continue;									//右低
		i = right;
		sum++;																//右高
	}
	cout << sum;
}