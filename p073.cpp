#include<cstdio>

int heap[MAX_N],sz=0;//sz����Ԫ�ظ��� 
void push(int x){
	int i=sz++;
	while(i>0){
		int p=(i-1)/2;//���׽���� 
		if(heap[p]<=x)break;//����Ѿ�û�д�С�ߵ����˳� 
		heap[i]=heap[p];//�Ѹ��׽�����ֵ�����Լ���ǰλ�� 
		i=p;//���Լ�λ�õ���Ϊ����λ�� 
	}
	heap[i]=x; 
} 

int pop(){
	int ret=heap[0];//��Сֵ 
	int x=heap[--sz];//���һ��Ԫ�ص�ֵ��Ҫ�ᵽ���ڵ����ֵ�� 
	int i=0;//�Ӹ���ʼ���½��� 
	while(i*2+1<sz){
		int a=i*2+1,b=i*2+2;//�Ƚ϶��ӵ�ֵ 
		if(b<sz&&heap[b]<heap[a])a=b;//������Ҷ������Ҷ���ֵС������ӣ���������ӣ�������С����ֵ��λ�õĸ���a�� 
		if(heap[a]>=x)break;//���û�д�С�ߵ����˳� 
		heap[i]=heap[a];//�Ѷ��ӵ���ֵ������ ����С�ߵ���
		i=a; 
	} 
	heap[i]=x;
	
	return ret;
}












