#include<bits/stdc++.h>
using namespace std;
int n,m,nm[101][101],z,c;
int main(){
	cin>>n>>m;
	for(int a=0;a<n;a++)
	for(int b=0;b<m;b++)
	for(int i=a+1;i<=n;i++){
		for(int j=b+1;j<=m;j++){
			if(i-a==j-b) z++;
			else c++;
		}
	}
	cout<<z<<' '<<c;
	return 0;
}