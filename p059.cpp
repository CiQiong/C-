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


//01����
void solve(){
	for(int i=0;i<n;i++){
		for(int j=W;j>=w[i];j--){
			dp[j]=max(dp[j-w[i]]+v[i],dp[j]);//Ҫ���������û�б��Ķ�
		}
	}
	printf("%d\n",dp[W]);
} 

//��ȫ����
void solve(){
	for(int i=0;i<n;i++){
		for(int j=W[i];j<=W;j++){
			dp[j]=max(dp[j],dp[j-W[i]]+v[i]);//Ҫ�����Ϸ������Ѿ�����Ϊ���� 
		}
	}
	printf("%d\n",dp[W]);
} 


