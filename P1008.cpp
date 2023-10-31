#include<bits/stdc++.h>
using namespace std;
int n1,n2,n3,a[10],cnt;
int main(){
	for(n1=123;n1<333;n1++){
		cnt=1;
		n2=2*n1;
		n3=3*n1;
		a[n1/100]=a[n1/10%10]=a[n1%10]=a[n2/100]=a[n2/10%10]=a[n2%10]=a[n3/100]=a[n3/10%10]=a[n3%10]=1;
		for(int i=1;i<10;i++){
			if(!a[i]) cnt=0;
			a[i]=0;
		}
		if(cnt) cout<<n1<<' '<<n2<<' '<<n3<<endl;
	}
	return 0;
}