#include<iostream>
using namespace std;
int sum;
int jump(int n) {
	if (n == 1 || n == 2)
		return n;
	else if(n > 2)
		return jump(n - 1) + jump(n - 2);
}
void solve(int n) {
	if (n == 1)
		sum++;
	else
		for (int i = 2; i <= n; i++)
			if (n % i == 0)
				solve(n / i);
}
int main() {
	int n = 0;
	cin >> n;
	cout << "青蛙跳台阶：" << jump(n)<<endl;
	solve(n);
	cout << "整数因子分解："<<sum;

}
