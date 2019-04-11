#include<cstdio>
#define MAX_N 10000

int par[MAX_N];
int rank[MAX_N];

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

int main(){
	
} 
























