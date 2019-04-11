#include<cstdio>
#include<queue>
#define MAX_N 1000000
using namespace std;
int L,P,N;//目标距离L，车中自带P单位，N个加油站 
int A[MAX_N+1],B[MAX_N+1];//Ai加油站位置，Bi加油站储油 
void solve(){
	A[N]=L;
	B[N]=0;
	N++;
	priority_queue<int> que;//依次将加油站加入优先队列 
	int ans=0,pos=0,tank=P;//ans:加油次数，pos:现在所在位置，tank:油箱中的汽油量
	for(int i=0;i<N;i++){
		int d=A[i]-pos;//接下去要前进的距离 =第i个加油站所在位置-汽车位置 
		while(tank-d<0){//不断加油，直到油量足够行驶到下一个加油站 
			if(que.empty()){//如果队列变成空了，则无法到达终点 
				puts("-1");
				return;
			} 
			tank+=que.top();//油箱加上当前队列中的最大值 
			que.pop();//让最大值出队列 
			ans++;//要加油的车站又多了一个 
		} 
		tank-=d;//行走d单位，汽车油箱减少d单位油 
		pos=A[i];//此时到达第i号加油站位置
		que.push(B[i]);//将第i号加油站（储油量）加入优先队列 
	}
	printf("%d\n",ans);
}

int main(){
	
}















