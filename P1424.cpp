#include<bits/stdc++.h>
using namespace std;
int x,n,sum;
int main(){
	cin>>x>>n;
	for(int i=0;i<=n;i++){
		if((x+i)%7==6||(x+i)%7==0)
			continue;
		sum+=250;
	}
	cout<<sum;
	return 0;
}