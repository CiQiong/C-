#include<cstdio>
#include<algorithm>
using namespace std;

int dp[MAX_N+1][MAX_W+1];
int rec(int i,int j){
	if(dp[i][j]>=0)return dp[i][j];//�Ѿ�������Ļ�ֱ��ʹ��֮ǰ�Ľ��
	int res;
	if(i==n) res=0;//�Ѿ�û��ʣ����Ʒ�� 
	else if(j<w[i]) res=rec(i+1,j);//�޷���ѡ�����Ʒ 
	else res=max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);//��ѡ�Ͳ���ѡ�������������һ�� 
	return dp[i][j]=res;//�������¼�������� 
}

void solve(){
	memset(dp,-1,sizeof(dp));
	printf("%d\n",rec(0,w));
} 

#include<cstdio>
#include<algoritnm>
using namespace std;
int dp[MAX_N+1][MAX_N+1];
void solve(){
	for(int i=n-1;n>=0;i--)
		for(int j=0;j<=W;j++)
			if(j<w[i])
				dp[i][j]=dp[i+1][j];
			else
				dp[i][j]=max(dp[i+1][j],dp[i+1][j-w[i]]+v[i]);
	printf("%d\n",dp[0][W]);
}

