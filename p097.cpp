#include<cstdio>
#include<vector>
#define MAX_V 1000000 
using namespace std;

struct vertex{
	vector<vertex*> edge;
	/*
	*图的操作 
	*/ 
};
vertex G[MAX_V];

int main(){
	int V,E;
	scanf("%d %d",&V,&E);
	for(int i=0;i<E;i++){
		int s,t;
		scanf("%d %d",&s,&t);
		G[s].edge.push_back(&G[t]);//s定点指向t的地址 
		//G[t].edge.push_back(&G[s]);//无向图 
	}
	/*
	*图的操作 
	*/ 
	return 0;
} 
