#include<cstdio>
#include<algorithm>
using namespace std;

int dp[MAX_N+1][MAX_W+1];
int rec(int i,int j){
	if(dp[i][j]>=0)return dp[i][j];//已经计算过的话直接使用之前的结果
	int res;
	if(i==n) res=0;//已经没有剩余物品了 
	else if(j<w[i]) res=rec(i+1,j);//无法挑选这个物品 
	else res=max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);//挑选和不挑选两种情况都尝试一下 
	return dp[i][j]=res;//将结果记录在数组里 
}

void solve(){
	memset(dp,-1,sizeof(dp));
	printf("%d\n",rec(0,w));
} 

#include<cstdio>
#include<algoritnm>
using namespace std;
int dp[MAX_N+1][MAX_N+1];
void solve(){
	for(int i=n-1;n>=0;i--)
		for(int j=0;j<=W;j++)
			if(j<w[i])
				dp[i][j]=dp[i+1][j];
			else
				dp[i][j]=max(dp[i+1][j],dp[i+1][j-w[i]]+v[i]);
	printf("%d\n",dp[0][W]);
}

