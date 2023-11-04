#include<bits/stdc++.h>
using namespace std;
int sum[10],a,b;
int main(){
	cin>>a>>b;
	for(int i=a;i<=b;i++)
		for(int j=i;j;j/=10)
			sum[j%10]++;
	for(int i=0;i<10;i++)
		cout<<sum[i]<<' ';
	return 0;
}