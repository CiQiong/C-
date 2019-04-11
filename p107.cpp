#include<cstdio>
#include<algorithm>
#define MAX_E 1000
using namespace std;
struct edge{
	int u,v,cost;
};
bool cmp(const edge& e1,const edge& e2){
	return e1.cost<e2.cost;
}
edge es[MAX_E];
int V,E;//顶点数和边数 
int par[MAX_E];
int rank[MAX_E];
void init(int n){//初始化n个元素 
	for(int i=0;i<n;i++){
		par[i]=i;//初始化每个节点的父亲都是自己 
		rank[i]=0;//初始化每个节点的高度都是0 
	}
}
int find(int x){//查询树的根 
	if(par[x]==x){//如果自己是（到达）根节点 
		return x;
	} else {//如果自己有父节点 
		return par[x]=find(par[x]);//顺便将这个节点父结点的父结点（根节点）变为自己的父结点 
	}
}
void unite(int x,int y){//合并x和y所属的集合 
	x=find(x);//找到x节点所在树的根节点 
	y=find(y);//找到y节点所在树的根节点 
	if(x==y) return;//如果x和y同属于一个树，返回 
	if(rank[x]<rank[y]){//如果y所在的树更高一些 
		par[x]=y;//y树的根作为x树的根 
	} else {
		par[y]=x;//否则x树的根做为y树的根
		if(rank[x]==rank[y]) rank[x]++;//如果一样高，则x树的高度+1 
	}
}
bool same(int x,int y){//判断x和y是否属于同一个集合 
	return find(x)==find(y);//只要判断是否有同一个跟 
} 
int kruskal(){ //集合加边算法 
	sort(es,es+E,cmp);//按照edge.cost(边的权值)从小到大的顺序排序 
	init(V);//初始化并查集 
	int res=0;
	for(int i=0;i<E;i++){//对于已排序的每一条边 
		if(!same(es[i].u,es[i].v)){//如果边上的两个顶点u和v不属于一个集合 
			unite(es[i].u,es[i].v);//将它们合并在同一个集合 
			res+=es[i].cost;//结果(已有的生成树)加上这条边的权值 
		} //如果已经是同一个集合了，就不管这条边，进入下条边 
	}
	return res;
}
int main(){
	return 0;
}
