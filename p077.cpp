#include<queue>
#include<cstdio> 
#define MAX_N 100000
using namespace std;
typedef long long ll;
int N,L[MAX_N];
void solve(){
	ll ans=0;
	priority_queue<int, vector<int>, greater<int> > que;//����һ����С����ȡ����ֵ�����ȶ���
	for(int i=0;i<N;i++){//������ľ�������� 
		que.push(L[i]);
	}
	while(que.size()>1){
		int l1,l2;//ȡ����̵�����ľ��
		l1=que.top();
		que.pop();
		l2=que.top();
		que.pop();
		ans+=l1+l2;
		que.push(l1+l2);//������ľ��ϲ��������� 
	} 
	printf("%lld\n",ans);
}
int main(){
	//return 0;
}



