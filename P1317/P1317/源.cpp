#include<bits/stdc++.h>
using namespace std;
int main() {
	int sum = 0, a[10001], n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 2; i < n; i++) {
		int left = i, right = i;
		if (a[i] > a[i - 1] || a[i] > a[i + 1]) continue;			//�������Ҷ���
		if (a[i - 1] > a[i] && a[i + 1] > a[i]) {					//�������Ҷ���
			sum++;
			continue;
		}
		while (a[--left] == a[i]) {}										//����ƽ
		if (a[left] < a[i]) continue;									//���	else	���
		while(a[++right]==a[i]){}										//����ƽ
		if (a[right] < a[i]) continue;									//�ҵ�
		i = right;
		sum++;																//�Ҹ�
	}
	cout << sum;
}