#include<cstdio>
#include<cstring> //memset
#define INF 100000000
#define MAX_E 1000000
#define MAX_V 1000000 
struct edge{
	int from,to,cost;
};
edge es[MAX_E];//边
int d[MAX_V];//最短距离 
int V,E;//顶点数，边数

void shotest_path(int s){//从顶点s出发到所有点的最短距离 
	for(int i=0;i<V;i++) d[i]=INF;//初始化 
	d[s]=0;
	while(true){//不存在负圈，则更新次数有限 （最多循环|V|-1次，路径形成一棵树） 
		bool update=false;
		for(int i=0;i<E;i++){//遍历所有边 
			edge e=es[i]; 
			if(d[e.from]!=INF&&d[e.to]>d[e.from]+e.cost){
				d[e.to]=d[e.from]+e.cost;
				update=true;
			} 
		} 
		if(!update) break;//不再需要更新，不存在更短的距离 
	}
} 

bool find_negative_loop(){//查找是否存在负圈 
	memset(d,0,sizeof(d));
	for(int i=0;i<V;i++){//记录更新次数，如果第V次仍然更新了，则存在负圈 
		for(int j=0;j<E;j++){
			edge e=es[j];
			if(d[e.to]>d[e.from]+e.cost){
				d[e.to]=d[e.from]+d[e.cost];
				if(i==V-1) return true;//如果第V次仍然更新了，则存在负圈 
			}
		}
	}
	return false; 
}


int main(){
	
}






























