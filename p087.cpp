#include<cstdio>
#define MAX_N 10000

int par[MAX_N];
int rank[MAX_N];

void init(int n){//��ʼ��n��Ԫ�� 
	for(int i=0;i<n;i++){
		par[i]=i;//��ʼ��ÿ���ڵ�ĸ��׶����Լ� 
		rank[i]=0;//��ʼ��ÿ���ڵ�ĸ߶ȶ���0 
	}
}

int find(int x){//��ѯ���ĸ� 
	if(par[x]==x){//����Լ��ǣ�������ڵ� 
		return x;
	} else {//����Լ��и��ڵ� 
		return par[x]=find(par[x]);//˳�㽫����ڵ㸸���ĸ���㣨���ڵ㣩��Ϊ�Լ��ĸ���� 
	}
}

void unite(int x,int y){//�ϲ�x��y�����ļ��� 
	x=find(x);//�ҵ�x�ڵ��������ĸ��ڵ� 
	y=find(y);//�ҵ�y�ڵ��������ĸ��ڵ� 
	if(x==y) return;//���x��yͬ����һ���������� 
	if(rank[x]<rank[y]){//���y���ڵ�������һЩ 
		par[x]=y;//y���ĸ���Ϊx���ĸ� 
	} else {
		par[y]=x;//����x���ĸ���Ϊy���ĸ�
		if(rank[x]==rank[y]) rank[x]++;//���һ���ߣ���x���ĸ߶�+1 
	}
}

bool same(int x,int y){//�ж�x��y�Ƿ�����ͬһ������ 
	return find(x)==find(y);//ֻҪ�ж��Ƿ���ͬһ���� 
} 

int main(){
	
} 
























