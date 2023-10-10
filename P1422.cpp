#include<bits/stdc++.h>
using namespace std;
int sum;
double money;
int main(){
	cin>>sum;
	if(sum<=150){
		money=sum*0.4463;
		printf("%.1f",money);
		return 0;
	}
	if(sum-400>0){
		sum-=400;
		money+=150*0.4463+250*0.4663+sum*0.5663;
	}
	if(sum-150>0){
		sum-=150;
		money+=150*0.4463+sum*0.4663;
	}
	printf("%.1f",money);
	return 0;
}