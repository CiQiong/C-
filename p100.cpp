#include<cstdio>
#include<cstring> //memset
#define INF 100000000
#define MAX_E 1000000
#define MAX_V 1000000 
struct edge{
	int from,to,cost;
};
edge es[MAX_E];//��
int d[MAX_V];//��̾��� 
int V,E;//������������

void shotest_path(int s){//�Ӷ���s���������е����̾��� 
	for(int i=0;i<V;i++) d[i]=INF;//��ʼ�� 
	d[s]=0;
	while(true){//�����ڸ�Ȧ������´������� �����ѭ��|V|-1�Σ�·���γ�һ������ 
		bool update=false;
		for(int i=0;i<E;i++){//�������б� 
			edge e=es[i]; 
			if(d[e.from]!=INF&&d[e.to]>d[e.from]+e.cost){
				d[e.to]=d[e.from]+e.cost;
				update=true;
			} 
		} 
		if(!update) break;//������Ҫ���£������ڸ��̵ľ��� 
	}
} 

bool find_negative_loop(){//�����Ƿ���ڸ�Ȧ 
	memset(d,0,sizeof(d));
	for(int i=0;i<V;i++){//��¼���´����������V����Ȼ�����ˣ�����ڸ�Ȧ 
		for(int j=0;j<E;j++){
			edge e=es[j];
			if(d[e.to]>d[e.from]+e.cost){
				d[e.to]=d[e.from]+d[e.cost];
				if(i==V-1) return true;//�����V����Ȼ�����ˣ�����ڸ�Ȧ 
			}
		}
	}
	return false; 
}


int main(){
	
}






























