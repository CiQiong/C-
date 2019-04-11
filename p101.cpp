#include<algorithm>
#define MAX_V 20000
#define INF 10000000
using namespace std;

int cost[MAX_V][MAX_V];
int d[MAX_V];//����s��������̾���
bool used[MAX_V];//�Ѿ��ù���ͼ
int V;//������

//����������������������̾���
void dijkstra(int s){
	fill(d,d+V,INF);
	fill(used,used+V,false);
	d[s]=0;
	while(true){
		int v=-1;
		for(int u=0;u<V;u++){//����δʹ�ù��Ķ�����ѡ��һ��������С�Ķ���v
			if(!used[u]&&(v==-1||d[u]<d[v])) v=u;
		} 
		if(v==-1) break;//������е㶼ʹ�ù��ˣ��ͽ��� 
		used[v]=true;//��ʼʹ��v����� 
		for(int u=0;u<V;u++){//������v���ӵ����е�ľ���Ϊ��ǰ��Сֵ 
			d[u]=min(d[u],d[v]+cost[v][u]);
		}
	}
} 


int main(){
	return 0;
}
