#include<cstdio>
#include<algorithm>
#define MAX_N 100001
using namespace std;
int n;
int a[MAX_N];
int dp[MAX_N];//dp[i]��a[i]Ϊ��β������������еĳ��� 
void solve(){
	int res=0;
	for(int i=0;i<n;i++){//������dp[i] 
		dp[i]=1;
		for(int j=0;j<i;j++) if(a[j]<a[i]) dp[i]=max(dp[i],dp[j]+1);//���ϸ����������dp[i] 
		res=max(res,dp[i]); //�������dp[n-1],����dp[0~n-1]�������Ǹ� 
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
�������� 
5
4 2 3 1 5
��
3
*/ 





