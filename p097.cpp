#include<cstdio>
#include<vector>
#define MAX_V 1000000 
using namespace std;

struct vertex{
	vector<vertex*> edge;
	/*
	*ͼ�Ĳ��� 
	*/ 
};
vertex G[MAX_V];

int main(){
	int V,E;
	scanf("%d %d",&V,&E);
	for(int i=0;i<E;i++){
		int s,t;
		scanf("%d %d",&s,&t);
		G[s].edge.push_back(&G[t]);//s����ָ��t�ĵ�ַ 
		//G[t].edge.push_back(&G[s]);//����ͼ 
	}
	/*
	*ͼ�Ĳ��� 
	*/ 
	return 0;
} 
