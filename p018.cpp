#include<cstdio>
#include<algorithm>
#define MAX_N 10005
using namespace std;
int main(){
	int L,n,x[MAX_N];
	scanf("%d %d",&L,&n);
	for(int i=0;i<n;i++)
		scanf("%d",&x[i]);
	int maxT=0,minT=0;
	for(int i=0;i<n;i++){
		maxT=max(maxT,max(x[i],L-x[i]));
		minT=max(minT,min(x[i],L-x[i]));
	} 
	printf("max=%d,min=%d\n",maxT,minT);
	return 0;
} 
