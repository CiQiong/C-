#include<cstdio>
#include<algorithm>
#define MAX_N 105
#define MAX_V 105
#define INF 1<<30
using namespace std;
int n,W;
int w[MAX_N];
int v[MAX_N];

//dp[j]前i个物品挑选出价值总和为j时总重量的最小值 
int dp[MAX_N*MAX_V+1];

void solve(){
	fill(dp,dp+MAX_N*MAX_V+1,INF);
	dp[0]=0;
	for(int i=0;i<n;i++){
		for(int j=MAX_N*MAX_V;j>=0;j--){
			dp[j]=min(dp[j],dp[j-v[i]]+w[i]);
		}
	}
	int res=0;
	for(int i=0;i<MAX_N*MAX_V;i++) if(dp[i]<=W) res=i;
	printf("%d\n",res);
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&w[i],&v[i]);
	}
	scanf("%d",&W);
	solve();
	return 0;
}
/*
测试用例 
4
2 3
1 2
3 4
2 2
5
输出
7 
*/

