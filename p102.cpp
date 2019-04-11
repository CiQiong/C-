#include<vector>
#include<queue>
//#include<algorithm>//fill
#define MAX_V 10000 
#define INF 10000000 
using namespace std;

struct edge{
	int to,cost;
}; 
typedef pair<int,int> P;//first是最短距离，second是顶点的编号

int V;
vector<edge> G[MAX_V];//邻接表 
int d[MAX_V]; 

void dijkstra(int s){
	priority_queue<P,vector<P>,greater<P> > que;
	fill(d,d+V,INF);
	d[s]=0;
	while(!que.empty()){
		P p=que.top();
		que.pop();//每次取出距离最短的顶点p 
		int v=p.second;//当前顶点p的顶点编号 
		if(d[v]<p.first) continue;//如果不用更新，则跳过 
		for(int i=0;i<G[v].size();i++){//遍历与v相连的所有点 
			edge e=G[v][i];//连接v、i两顶点的边 
			if(d[e.to]>d[v]+e.cost){//如果需要更新 
				d[e.to]=d[v]+e.cost;//更新 
				que.push(P(d[e.to],e.to));//将更新内容加入优先队列 
			}
		}
	}
}

int main(){
	return 0;
}


