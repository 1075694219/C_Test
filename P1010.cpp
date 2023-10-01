#include<bits/stdc++.h>
using namespace std;
int n;
int num[20]={1};
void dfs(int n){
	int sum=0;
	while(n>=num[sum])
		sum++;
	sum--;
	if(sum==1) cout<<2;
	else if(sum==0) cout<<"2(0)";
	else {
		cout<<"2(";
		dfs(sum);
		cout<<")";
	}
	n-=num[sum];
	if(n!=0){
		cout<<"+";
		dfs(n);
	}
}
int main(){
	cin>>n;
	for(int i=1;i<20;i++) num[i]=num[i-1]*2;
	dfs(n);
	return 0;
}
