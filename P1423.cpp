#include<bits/stdc++.h>
using namespace std;
int sum;
double s,ss,first=2;
int main(){
	cin>>s;
	ss+=first;
	sum++;
	while(ss<=s){
		first*=0.98;
		ss+=first;
		sum++;
	}
	cout<<sum;
	return 0;
}