/* 
#include<cstdio>
#include<algorithm>
#define MAX_N 1005
#define INF 1000010
using namespace std;
//������ͬ����µ�ĩβԪ���е���Сֵ 
int dp[MAX_N];//dp[i]����Ϊi+1��������������ĩβԪ�ص���Сֵ�������ڵĻ�����INF�� 
int n,a[MAX_N];
void solve(){
	fill(dp,dp+n,INF);
	for(int i=0;i<n;i++) *lower_bound(dp,dp+n,a[i])=a[i];
	printf("%d\n",lower_bound(dp,dp+n,INF)-dp);
} 
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	solve();
	return 0;
}
*/ 
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int dp[1005],n,ai;
	scanf("%d",&n);
	fill(dp,dp+n,1000010);
	for(int i=0;i<n;i++){
		scanf("%d",&ai);
		*lower_bound(dp,dp+n,ai)=ai;
	 } 
	printf("%d\n",lower_bound(dp,dp+n,1000010)-dp);
	return 0;
}
