#include<bits/stdc++.h>
using namespace std;
int a,b,c,d;
char e;
int main(){
	cin>>a>>e>>b>>c>>e>>d;
	a*=c;
	b*=d;
	int max,min;
	if(a>b){max=a;min=b;}
	else {max=b;min=a;}
	while(c=max%min){
		max=min;
		min=c;
	}
	a/=min;
	b/=min;
	cout<<b<<' '<<a;
	return 0;
}