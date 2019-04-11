int dp[2][MAX_W+1];
void solve(){
	for(int i=0;i<n;i++){
		for(int j=0;j<=W;j++){
			if(j<w[i]){
				dp[(i+1)&1][j]=dp[i&1][j];
			} else {
				dp[(i+1)&1][j]=max(dp[i&1][j],dp[(i+1)&1][j-w[i]]+v[i]);
			}
		}
	}
	printf("%d\n",dp[n&1][W]);
} 











