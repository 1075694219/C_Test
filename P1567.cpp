#include<bits/stdc++.h>
using namespace std;
int N,a,b,Max,cnt;
int main(){
	cin>>N;
	cin>>a;
	for(int i=0;i<N-1;i++){
		cin>>b;
		if(b>=a) {
			cnt++;
			if(cnt>Max) Max=cnt;
		}
		else cnt=1;
		a=b;
	}
	if(cnt>Max) Max=cnt;
	cout<<Max;
	return 0;
}