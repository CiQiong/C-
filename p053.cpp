#include<cstdio>
//#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int a[4]={5,3,7,2};
	//memset(a,0,sizeof(a));
	fill(a,a+5,520);
	for(int i=0;i<4;i++)
		printf("%d ",a[i]);
	return 0;
} 


