#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
	cin>>n;
	int i=1;
	while(n>0){
		n-=i++;
	}
	i--;
	n+=i;
	if(i%2==0){
		for(m=0;n>0;n--,m++);
		cout<<m<<'/'<<i-m+1;
	}else{
		for(m=0;n>0;n--,m++);
		cout<<i-m+1<<'/'<<m;
	}
	return 0;
}