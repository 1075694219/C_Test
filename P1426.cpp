#include<bits/stdc++.h>
using namespace std;
double v=7,sum,s,x;
int main(){
	cin>>s>>x;
	while(sum<s-x){
        sum+=v;
		v*=0.98;
	}
	if(sum+v*0.98>=s+x) cout<<'n';
	else cout<<'y';
	return 0;
}