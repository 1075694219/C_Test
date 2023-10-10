#include<bits/stdc++.h>
using namespace std;
int a,b,price=19,sum;
int main(){
	cin>>a>>b;
	int money=10*a+b;
	while(money>=price){
		sum++;
		money-=price;
	}
	cout<<sum;
	return 0;
}