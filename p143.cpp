#include<cstdio>
#include<algorithm>
#define MAX_N 100000
#define INF 1000000000
using namespace std;

int N,M;
int x[MAX_N];

bool C(int d){
	int last=0;
	for(int i=1;i<M;i++){//M头牛 
		int crt=last+1;//牛舍编号 
		while(crt<N&&x[crt]-x[last]<d){//找到牛舌编号正确(<N)且两个牛舍距离大于d的第一个牛舍 
			crt++;//查看下一个牛舍 
		} 
		if(crt==N) return false;
		last=crt; //这个牛舍住下牛，并开始找下一头牛的牛舍编号 
	}
	return true;//所有牛都找到了牛舍 
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
