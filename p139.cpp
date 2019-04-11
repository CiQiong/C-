#include<cstdio>
#include<algorithm>
#define MAX_N 100000
using namespace std;
int n,k; 
int a[MAX_N];

void solve1(){
	int lb=-1,ub=n;
	while(ub-lb>1){
		int mid=(ub+lb)/2;
		if(a[mid]>=k) ub=mid;//靠左正确 
		else lb=mid;
	}
	printf("%d\n",ub);
}
void solve2(){
	int lb=-1,ub=n;
	while(ub-lb>1){
		int mid=(ub+lb)/2;
		if(a[mid]>k) ub=mid;
		else lb=mid;
	}
	printf("%d\n",ub);
}

int main(){
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	printf("%d\n",lower_bound(a,a+n,k)-a);
	printf("%d\n",upper_bound(a,a+n,k)-a);
	solve1();
	solve2();
	return 0;
}
/*
输入 
5 3
2 3 3 5 6 
输出
1
3 
*/ 
