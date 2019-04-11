#include<cstdio>
#define MAX_N 100

int main(){
	int n,a[MAX_N],p;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=n-1;i>=2;i--)
		if(a[i]<a[i-1]+a[i-2]){
			printf("%d\n",a[i]+a[i-1]+a[i-2]);
			return 0;
		}
	printf("0\n");
	return 0;
}
