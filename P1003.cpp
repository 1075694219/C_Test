#include<bits/stdc++.h>
using namespace std;

int n,a[10001],b[10001],xa[10001],yb[10001];
int x,y;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin >> a[i] >> b[i] >> xa[i] >> yb[i];
	cin>>x>>y;
	for(int i=n;i>0;i--)
		if(x>=a[i]&&y>=b[i]&&x<=a[i]+xa[i]&&y<=b[i]+yb[i]){
			cout<<i;
			return 0;
		}
	return -1;
	return 0;
}