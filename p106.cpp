#include<cstdio>
#include<algorithm>
#define MAX_V 10000
#define INF 1000000
using namespace std;
int cost[MAX_V][MAX_V];//cost[u][v]��ʾ��e=(u,v)��Ȩֵ(������ʱ��ΪINF) 
int mincost[MAX_V];//�Ӽ���x�����ıߵ�ÿ���������СȨֵ 
bool used[MAX_V];//����i�Ƿ�����ڼ���x��
int V;
int prim(){//���ϼӵ��㷨 
	for(int i=0;i<V;i++){	mincost[i]=INF;used[i]=false;}
	mincost[0]=0;
	int res=0;
	while(true) { 
		int v=-1;
		//�Ӳ����ڼ���x�Ķ�����ѡȡ��x����Ȩֵ��С�Ķ��� v
		for(int u=0;u<V;u++) if(!used[u]&&(v==-1||mincost[u]<mincost[v])) v=u; 
		if(v==-1) break;//���е㶼���ù��˵�ʱ���˳�ѭ�� 
		used[v]=true;//�Ѷ���v���뵽x
		res+=mincost[v]; //�ѱߵĳ��ȼӵ������
		for(int u=0;u<V;u++) mincost[u]=min(mincost[u],cost[v][u]);//����mincost���� 
	}
	return res;
}

int main(){
	return 0;
}
