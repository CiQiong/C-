#include<cstdio>

int n,m;
char s[MAX_N],t[MAX_M];
int dp[MAX_N+1][MAX_N+1];

void solve(){
	for(int i=0;i<n;i++){//长度为n的字符串 s 
		for(int j=0;j<m;j++){//长度为m的字符串 t 
			if(s[i]==t[j]){ //当在s字符串中遇到和t字符串一样的字符时
				dp[i+1][j+1]=dp[i][j]+1; //在之前的计算中加1个公共字符 
			} else { //不一样 
				dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);  
			}
		}
	}
	printf("%d\n",dp[n][m]);
} 
