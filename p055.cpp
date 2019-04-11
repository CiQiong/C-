
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
}

void solve(){
	for(int i=0;i<n;i++){
		for(int j=0;j<=W;j++){
			dp[i+1][j]=max(dp[i][j],dp[i+1][j])
			if(j+w[i]<=W){
				dp[i+1][j+w[i]]=max(dp[i+1][j+w[i]],dp[i][j]+v[i]);
			}
		}
	}
	printf("%d\n",dp[n][W]);
}
