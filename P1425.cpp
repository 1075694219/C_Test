#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f;
int main(){
	cin>>a>>b>>c>>d;
	a=a*60+b;
	c=c*60+d;
	d=c-a;
	e=d%60;
	f=(d-e%60)/60;
	cout<<f<<' '<<e;
	return 0;
}