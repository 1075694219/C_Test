#include<bits/stdc++.h>
using namespace std;
int n,sum,a,b,sad;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		sum=sum+a+b-8;
		sad+=sum;
	}
	cout<<sad;
	return 0;
}