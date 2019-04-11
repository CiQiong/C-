#include<cstdio>
#include<vector>
#define MAX_V 1000000
using namespace std;

vector<int> G[MAX_V];
int V;
int color[MAX_V];//����i����ɫ��-1or1�� 

bool dfs(int v,int c){//��ǰ����v����ǰ����ҪȾ����ɫc 
	color[v]=c;
	for(int i=0;i<G.size();i++){
		if(color[G[v][i]]==c) return false;//������ڶ�����ɫ��ͬ������false 
		//�����ڵ�û��Ⱦ��ɫ�Ķ���Ⱦɫ����������У��򷵻�false
		if(color[G[v][i]]==0&&!dfs(G[v][i],-c)) return false;
		// if(color[G[v][i]]==-c) continue;
	}
	return true;//���ж��㶼Ⱦ��ɫ�� 
}

void solve(){
	for(int i=0;i<V;i++){//��ÿһ������ 
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
