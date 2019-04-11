#include<vector>
#include<queue>
//#include<algorithm>//fill
#define MAX_V 10000 
#define INF 10000000 
using namespace std;

struct edge{
	int to,cost;
}; 
typedef pair<int,int> P;//first����̾��룬second�Ƕ���ı��

int V;
vector<edge> G[MAX_V];//�ڽӱ� 
int d[MAX_V]; 

void dijkstra(int s){
	priority_queue<P,vector<P>,greater<P> > que;
	fill(d,d+V,INF);
	d[s]=0;
	while(!que.empty()){
		P p=que.top();
		que.pop();//ÿ��ȡ��������̵Ķ���p 
		int v=p.second;//��ǰ����p�Ķ����� 
		if(d[v]<p.first) continue;//������ø��£������� 
		for(int i=0;i<G[v].size();i++){//������v���������е� 
			edge e=G[v][i];//����v��i������ı� 
			if(d[e.to]>d[v]+e.cost){//�����Ҫ���� 
				d[e.to]=d[v]+e.cost;//���� 
				que.push(P(d[e.to],e.to));//���������ݼ������ȶ��� 
			}
		}
	}
}

int main(){
	return 0;
}


