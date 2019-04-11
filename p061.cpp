#include<cstdio>
#include<algorithm>
#define MAX_N 105
#define MAX_V 105
#define INF 1<<30
using namespace std;
int n,W;
int w[MAX_N];
int v[MAX_N];

//dp[i+1][j]ǰi����Ʒ��ѡ����ֵ�ܺ�Ϊjʱ����������Сֵ 
int dp[MAX_N+1][MAX_N*MAX_V+1];

void solve(){
	fill(dp[0],dp[0]+MAX_N*MAX_V+1,INF);
	dp[0][0]=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<=MAX_N*MAX_V;j++){
			if(j<v[i]){
				dp[i+1][j]=dp[i][j];
			} else {
				dp[i+1][j]=min(dp[i][j],dp[i][j-v[i]]+w[i]);
			}
		}
	}
	int res=0;
	for(int i=0;i<MAX_N*MAX_V;i++) if(dp[n][i]<=W) res=i;
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
�������� 
4
2 3
1 2
3 4
2 2
5
���
7 
*/
/*
//��dp������һά�������飺 (�ײ����)
#include<cstdio>
#include<algorithm>
#define MAX_N 105
#define MAX_V 105
#define INF 1<<30
using namespace std;
int n,W;
int w[MAX_N];
int v[MAX_N];

//dp[j]ǰi����Ʒ��ѡ����ֵ�ܺ�Ϊjʱ����������Сֵ 
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
*/

 
