#include<bits/stdc++.h>
using namespace std;
int n,a,b,num=1,m=0;
int main(){
	cin>>n;
	cin>>a;
	b=a;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(b+1==a) num++;
		else {	
		b=a+1;
		num=1;
		}
		if(m<num) m=num;
		b=a;
	}
	cout<<m;
	return 0;
}
