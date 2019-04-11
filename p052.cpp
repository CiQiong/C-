#include<cstdio>
#include<algorithm>
using namespace std; 
int n,W;
int w[MAX_N],v[MAX_N];

int rec(int i,int j){
	int res;
	if(i==n){
		res=0;
	} else if(j<w[i]){
		res=rec(i+1,j);
	} else {
		res=max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
	}
	return res;
} 

void solve(){
	printf("%d\n",rec(0,w));
}

#include<cstdio>
#include<algorithm>
using namespace std;

int n,W;
int w[MAX_N],v[MAX_V];
int rec(int i,int j){//从第i个物品开始挑选总重小于j的部分 
	int res;
	if(i==n)res=0;//0~n-1行保存物品，n行没有东西。没有剩余物品了 
	else if(j<w[i]) res=rec(i+1,j);//剩下的容量小于该物品的重量，就无法挑选这个物品 
	//可以挑选这个物品，在不选这个物品（上一个物品的结果）和
	//选这个物品（上一个物品的结果加上这个物品的重量）中选最大的 
	else res=max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
	return res; 
}
void solve(){
	printf("%d\n",rec(0,w));
}


#include<cstdio>
#include<algorithm>
using namespace std;

int dp[MAX_N+1][MAX_W+1];
int rec(int i,int j){
	if(dp[i][j]>=0)return dp[i][j];//已经计算过的话直接使用之前的结果
	int res;
	if(i==n) res=0;//已经没有剩余物品了 
	else if(j<w[i]) res=rec(i+1,j);//无法挑选这个物品 
	else res=max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);//不选和选两种情况都尝试一下 
	return dp[i][j]=res;//将结果记录在数组里 
}

void solve(){
	memset(dp,-1,sizeof(dp));
	printf("%d\n",rec(0,w));
} 

