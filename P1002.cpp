#include<bits/stdc++.h>
using namespace std;
int map1[25][25]={0};
int m,n,xb,yb,num=0;
void dfs(int x,int y){
	if(map1[x][y]==1||x>xb||y>yb)
		return;
	if(x==xb&&y==yb){
		num++;
		return;
	}
	dfs(x+1,y);
	dfs(x,y+1);
}
int main() {
	cin>>xb>>yb>>m>>n;
	xb+=2;yb+=2;m+=2;n+=2;
	map1[m][n]=1;
	map1[m-2][n-1]=1;
	map1[m-1][n-2]=1;
	map1[m+2][n+1]=1;
	map1[m+2][n-1]=1;
	map1[m+1][n+2]=1;
	map1[m+1][n-2]=1;
	map1[m-2][n+1]=1;
	map1[m-1][n+2]=1;
	dfs(2,2);
	cout<<num;
	return 0;
}