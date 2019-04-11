#include<cstdio>
#include<algorithm>
using namespace std;
#define MAX_N 10000
#define INF 1000000

int n,k;
int w[MAX_N],v[MAX_N];
double y[MAX_N];//v-x*w

bool C(double x){
	for(int i=0;i<n;i++) y[i]=v[i]-x*w[i];
	sort(y,y+n);
	
	double sum=0;
	for(int i=0;i<k;i++) sum+=y[n-1-i];
	return sum>=0;
}

void solve(){
	double lb=0,ub=INF;
	for(int i=0;i<100;i++){
		double mid=(lb+ub)/2;
		if(C(mid)) lb=mid;//¿¿ÓÒÕýÈ· 
		else ub=mid;
	}
	printf("%.2f\n",ub);
}

int main(){
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++) scanf("%d%d",&w[i],&v[i]);
	solve();
	return 0;
}

/*
3 2
2 2
5 3
2 1

0.75
*/
