#include<cstdio>
#define MAX_V 1000000
#include<vector>
using namespace std;

vector<int> G[MAX_V];
/*
//边上有属性的情况 
struct edge {
	int to,cost;
};
vector<edge> G[MAX_V];
*/
int main(){
	int V,E;
	scanf("%d %d",&V,&E);
	for(int i=0;i<E;i++){
		int s,t;
		scanf("%d %d",&s,&t);
		G[s].push_back(t);
	} 
	
	/*
	一波图操作
	*/
	
	return 0; 
}
