#include<cstdio>
#include<algorithm>
#define MAX_N 100000
#define INF 1000000000
using namespace std;

int N,M;
int x[MAX_N];

bool C(int d){
	int last=0;
	for(int i=1;i<M;i++){//Mͷţ 
		int crt=last+1;//ţ���� 
		while(crt<N&&x[crt]-x[last]<d){//�ҵ�ţ������ȷ(<N)������ţ��������d�ĵ�һ��ţ�� 
			crt++;//�鿴��һ��ţ�� 
		} 
		if(crt==N) return false;
		last=crt; //���ţ��ס��ţ������ʼ����һͷţ��ţ���� 
	}
	return true;//����ţ���ҵ���ţ�� 
} 

void solve(){
	sort(x,x+N);
	int lb=0,ub=INF;
	while(ub-lb>1) {
		int mid=(ub+lb)/2;
		if(C(mid)) lb=mid;
		else ub=mid;
	}
	printf("%d\n",lb);
}

int main(){
	scanf("%d%d",&N,&M);
	for(int i=0;i<N;i++) scanf("%d",&x[i]);
	solve();
	return 0;
}

/*
5 3
1 2 8 4 9

3 
*/ 
