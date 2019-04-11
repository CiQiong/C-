#include<cstdio>
#define MAX_N 105
#define MAX_K 100010
int n;//���еĳ��� 
int K;//Ŀ��ĺ��� 
int a[MAX_N];//��ֵ 
int m[MAX_N];//���� 
//dp[i+1][j]��ǰi�������ܷ�Ӻͳ�j 
bool dp[MAX_N+1][MAX_K+1];

void solve(){
	dp[0][0]=true;
	for(int i=0;i<n;i++) {
		for(int j=0;j<=K;j++){
			for(int k=0;k<=m[i]&&k*a[i]<=j;k++){
				dp[i+1][j]|=dp[i][j-k*a[i]];
			}
		}
	}
	if(dp[n][K]) printf("Yes\n");
	else printf("No\n");
} 

int main(){
	scanf("%d %d",&n,&K);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&m[i]);
	}
	solve();
	return 0;
}
/* 
�������� 
3 17
3 5 8
3 2 2 

������� 
Yes 
*/ 

//dp[i+1][j]��ǰi�����Ӻ͵õ�jʱ��i���������ʣ����ٸ� 
int dp[MAX_K+1];
void solve(){
	memset(dp,-1,sizeof(dp));
	dp[0]=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<K;j++){
			if(dp[j]>=0){
				dp[j]=m[i];
			} else if(j<a[i]||dp[j-a[i]]<=0){
				dp[j]=-1;
			} else {
				dp[j]=dp[j-a[i]]-1;
			}
		}
	}
	if(dp[K]>=0) printf("Yes\n");
	else printf("No\n");
}

