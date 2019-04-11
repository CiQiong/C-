#include<cstdio>
#include<algorithm>
#define MAX_V 10000
#define INF 1000000
using namespace std;
int cost[MAX_V][MAX_V];//cost[u][v]表示边e=(u,v)的权值(不存在时设为INF) 
int mincost[MAX_V];//从集合x出发的边到每个顶点的最小权值 
bool used[MAX_V];//顶点i是否包含在集合x中
int V;
int prim(){//集合加点算法 
	for(int i=0;i<V;i++){	mincost[i]=INF;used[i]=false;}
	mincost[0]=0;
	int res=0;
	while(true) { 
		int v=-1;
		//从不属于集合x的顶点中选取从x到其权值最小的顶点 v
		for(int u=0;u<V;u++) if(!used[u]&&(v==-1||mincost[u]<mincost[v])) v=u; 
		if(v==-1) break;//所有点都被用过了的时候退出循环 
		used[v]=true;//把顶点v加入到x
		res+=mincost[v]; //把边的长度加到结果里
		for(int u=0;u<V;u++) mincost[u]=min(mincost[u],cost[v][u]);//更新mincost数组 
	}
	return res;
}

int main(){
	return 0;
}
