void solve(){
	for(int i=0;i<n;i++){
		for(int j=0;j<=W;j++){
			for(int k=0;k*w[i]<=j;k++){
				dp[i+1][j]=max(dp[i+1][j],dp[i][j-k*w[i]]+k*v[i]);
			}
		}
	}
	printf("%d\n",dp[n][W]);
}


void solve(){
	for(int i=0;i<n;i++){
		for(int j=0;j<=W;j++){
			if(j<w[i]){
				dp[i+1][j]=dp[i][j];
			} else {
				dp[i+1][j]=max(dp[i][j],dp[i][j-w[i]]+v[i]);
			}
		}
	}
	printf("%d\n",dp[n][W]);
}


//01背包
void solve(){
	for(int i=0;i<n;i++){
		for(int j=W;j>=w[i];j--){
			dp[j]=max(dp[j-w[i]]+v[i],dp[j]);//要求左边数字没有被改动
		}
	}
	printf("%d\n",dp[W]);
} 

//完全背包
void solve(){
	for(int i=0;i<n;i++){
		for(int j=W[i];j<=W;j++){
			dp[j]=max(dp[j],dp[j-W[i]]+v[i]);//要求左上方数字已经被改为最优 
		}
	}
	printf("%d\n",dp[W]);
} 


