#include<cstdio>
#include<queue>
#define MAX_N 1000000
using namespace std;
int L,P,N;//Ŀ�����L�������Դ�P��λ��N������վ 
int A[MAX_N+1],B[MAX_N+1];//Ai����վλ�ã�Bi����վ���� 
void solve(){
	A[N]=L;
	B[N]=0;
	N++;
	priority_queue<int> que;//���ν�����վ�������ȶ��� 
	int ans=0,pos=0,tank=P;//ans:���ʹ�����pos:��������λ�ã�tank:�����е�������
	for(int i=0;i<N;i++){
		int d=A[i]-pos;//����ȥҪǰ���ľ��� =��i������վ����λ��-����λ�� 
		while(tank-d<0){//���ϼ��ͣ�ֱ�������㹻��ʻ����һ������վ 
			if(que.empty()){//������б�ɿ��ˣ����޷������յ� 
				puts("-1");
				return;
			} 
			tank+=que.top();//������ϵ�ǰ�����е����ֵ 
			que.pop();//�����ֵ������ 
			ans++;//Ҫ���͵ĳ�վ�ֶ���һ�� 
		} 
		tank-=d;//����d��λ�������������d��λ�� 
		pos=A[i];//��ʱ�����i�ż���վλ��
		que.push(B[i]);//����i�ż���վ�����������������ȶ��� 
	}
	printf("%d\n",ans);
}

int main(){
	
}















