#include<bits/stdc++.h>
using namespace std;
int n;
int suki[100];
int main(){
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++){
		cin>>num[i];
		for(int j=i-1;j>=0;j--)
			if(num[i]>num[j]) suki[i]++;
	}
	for(int i=0;i<n;i++)
		cout<<suki[i]<<' ';
	return 0;
}