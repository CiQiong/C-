#include<cstdio>
#include<vector>
#define MAX_V 1000000
using namespace std;

vector<int> G[MAX_V];
int V;
int color[MAX_V];//顶点i的颜色（-1or1） 

bool dfs(int v,int c){//当前顶点v，当前顶点要染的颜色c 
	color[v]=c;
	for(int i=0;i<G.size();i++){
		if(color[G[v][i]]==c) return false;//如果相邻顶点颜色相同，返回false 
		//给相邻的没有染过色的顶点染色。如果还不行，则返回false
		if(color[G[v][i]]==0&&!dfs(G[v][i],-c)) return false;
		// if(color[G[v][i]]==-c) continue;
	}
	return true;//所有顶点都染过色了 
}

void solve(){
	for(int i=0;i<V;i++){//对每一个顶点 
		if(color[i]==0){
			if(!dfs(i,1)){
				printf("No\n");
				return;
			}
		} 
	} 
	printf("Yes\n"); 
} 

int main(){
	
} 
