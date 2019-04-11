#include<algorithm>
#define MAX_V 20000
#define INF 10000000
using namespace std;

int cost[MAX_V][MAX_V];
int d[MAX_V];//顶点s出发的最短距离
bool used[MAX_V];//已经用过的图
int V;//顶点数

//求从起点出发到各个顶点的最短距离
void dijkstra(int s){
	fill(d,d+V,INF);
	fill(used,used+V,false);
	d[s]=0;
	while(true){
		int v=-1;
		for(int u=0;u<V;u++){//从尚未使用过的顶点中选择一个距离最小的顶点v
			if(!used[u]&&(v==-1||d[u]<d[v])) v=u;
		} 
		if(v==-1) break;//如果所有点都使用过了，就结束 
		used[v]=true;//开始使用v这个点 
		for(int u=0;u<V;u++){//更新与v连接的所有点的距离为当前最小值 
			d[u]=min(d[u],d[v]+cost[v][u]);
		}
	}
} 


int main(){
	return 0;
}
