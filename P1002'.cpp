#include<bits/stdc++.h>
using namespace std;
int map1[25][25]={0};
long long map2[25][25]={};
int m,n,xb,yb;
int main() {
	cin>>xb>>yb>>m>>n;
	xb+=2;yb+=2;m+=2;n+=2;
	map1[m][n]=1;
    map1[m-1][n-2]=1;
    map1[m-2][n-1]=1;
    map1[m-2][n+1]=1;
    map1[m-1][n+2]=1;
    map1[m+1][n-2]=1;
    map1[m+2][n-1]=1;
    map1[m+2][n+1]=1;
    map1[m+1][n+2]=1;
	map2[2][2]=1;
	for(int i=2;i<=xb;i++)
		for(int j=2;j<=yb;j++){
			if(i==2&&j==2)	continue;
			if(map1[i][j]==0)	map2[i][j]=map2[i-1][j]+map2[i][j-1];
		}
	cout<<map2[xb][yb];
	return 0;
}