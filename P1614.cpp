#include<bits/stdc++.h>
using namespace std;
int num[3000],n,m,Min=111111111,cnt;
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>num[i];
	for(int i=0;i<n-m+1;i++){
		cnt=0;
		for(int j=i;j<i+m;j++)
			cnt+=num[j];
		if(Min>cnt) Min=cnt;
	}
	cout<<Min;
}