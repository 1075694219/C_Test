#include<bits/stdc++.h>
using namespace std;
int n[101];
int main(){
	int i=1;
	while(cin>>n[i++]);
	for(;i>0;i--)
		if(n[i]!=0) cout<<n[i]<<' ';
	return 0;
}