#include<queue>
#include<cstdio> 
#define MAX_N 100000
using namespace std;
typedef long long ll;
int N,L[MAX_N];
void solve(){
	ll ans=0;
	priority_queue<int, vector<int>, greater<int> > que;//声明一个从小到大取出数值的优先队列
	for(int i=0;i<N;i++){//将所有木板加入队列 
		que.push(L[i]);
	}
	while(que.size()>1){
		int l1,l2;//取出最短的两个木板
		l1=que.top();
		que.pop();
		l2=que.top();
		que.pop();
		ans+=l1+l2;
		que.push(l1+l2);//将两个木板合并后加入队列 
	} 
	printf("%lld\n",ans);
}
int main(){
	//return 0;
}



