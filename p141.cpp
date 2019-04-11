#include<cstdio>
#include<cmath>//floor 
#define MAX_N 10000
#define INF 100000
int N,K;
double L[MAX_N];

bool C(double x){
	int num=0;
	for(int i=0;i<N;i++){
		num+=(int)(L[i]/x);
	}
	return num>=K;
}

void solve(){
	double lb=0,ub=INF;
	for(int i=0;i<100;i++){
		double mid=(lb+ub)/2;
		if(C(mid)) lb=mid;
		else ub=mid;
	}
	printf("%.2f\n",floor(ub*100)/100);
}

int main(){
	scanf("%d%d",&N,&K);
	for(int i=0;i<N;i++) scanf("%lf",&L[i]);
	solve();
	return 0;
}
/*
ÊäÈë 
4 11
8.02 7.43 4.57 5.39
Êä³ö 
2.00
*/
