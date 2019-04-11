#include<cstdio>
#include<algorithm>
#define MAX_N 100001
using namespace std;
int n;
int a[MAX_N];
int dp[MAX_N];//dp[i]以a[i]为结尾的最长上升子序列的长度 
void solve(){
	int res=0;
	for(int i=0;i<n;i++){//依次求dp[i] 
		dp[i]=1;
		for(int j=0;j<i;j++) if(a[j]<a[i]) dp[i]=max(dp[i],dp[j]+1);//不断更新现在这个dp[i] 
		res=max(res,dp[i]); //结果不是dp[n-1],而是dp[0~n-1]中最大的那个 
	} 
	printf("%d\n",res);
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	solve();
	return 0;
}

/*
测试用例 
5
4 2 3 1 5
答案
3
*/ 





