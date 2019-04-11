#include<cstdio>
#include<algorithm>
using namespace std; 
int n,W;
int w[MAX_N],v[MAX_N];

int rec(int i,int j){
	int res;
	if(i==n){
		res=0;
	} else if(j<w[i]){
		res=rec(i+1,j);
	} else {
		res=max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
	}
	return res;
} 

void solve(){
	printf("%d\n",rec(0,w));
}

#include<cstdio>
#include<algorithm>
using namespace std;

int n,W;
int w[MAX_N],v[MAX_V];
int rec(int i,int j){//�ӵ�i����Ʒ��ʼ��ѡ����С��j�Ĳ��� 
	int res;
	if(i==n)res=0;//0~n-1�б�����Ʒ��n��û�ж�����û��ʣ����Ʒ�� 
	else if(j<w[i]) res=rec(i+1,j);//ʣ�µ�����С�ڸ���Ʒ�����������޷���ѡ�����Ʒ 
	//������ѡ�����Ʒ���ڲ�ѡ�����Ʒ����һ����Ʒ�Ľ������
	//ѡ�����Ʒ����һ����Ʒ�Ľ�����������Ʒ����������ѡ���� 
	else res=max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
	return res; 
}
void solve(){
	printf("%d\n",rec(0,w));
}


#include<cstdio>
#include<algorithm>
using namespace std;

int dp[MAX_N+1][MAX_W+1];
int rec(int i,int j){
	if(dp[i][j]>=0)return dp[i][j];//�Ѿ�������Ļ�ֱ��ʹ��֮ǰ�Ľ��
	int res;
	if(i==n) res=0;//�Ѿ�û��ʣ����Ʒ�� 
	else if(j<w[i]) res=rec(i+1,j);//�޷���ѡ�����Ʒ 
	else res=max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);//��ѡ��ѡ�������������һ�� 
	return dp[i][j]=res;//�������¼�������� 
}

void solve(){
	memset(dp,-1,sizeof(dp));
	printf("%d\n",rec(0,w));
} 

