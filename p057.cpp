#include<cstdio>

int n,m;
char s[MAX_N],t[MAX_M];
int dp[MAX_N+1][MAX_N+1];

void solve(){
	for(int i=0;i<n;i++){//����Ϊn���ַ��� s 
		for(int j=0;j<m;j++){//����Ϊm���ַ��� t 
			if(s[i]==t[j]){ //����s�ַ�����������t�ַ���һ�����ַ�ʱ
				dp[i+1][j+1]=dp[i][j]+1; //��֮ǰ�ļ����м�1�������ַ� 
			} else { //��һ�� 
				dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);  
			}
		}
	}
	printf("%d\n",dp[n][m]);
} 
