#include<cstdio>

int heap[MAX_N],sz=0;//sz代表元素个数 
void push(int x){
	int i=sz++;
	while(i>0){
		int p=(i-1)/2;//父亲结点编号 
		if(heap[p]<=x)break;//如果已经没有大小颠倒则退出 
		heap[i]=heap[p];//把父亲结点的数值放在自己当前位置 
		i=p;//将自己位置调整为父亲位置 
	}
	heap[i]=x; 
} 

int pop(){
	int ret=heap[0];//最小值 
	int x=heap[--sz];//最后一个元素的值（要提到根节点的数值） 
	int i=0;//从根开始向下交换 
	while(i*2+1<sz){
		int a=i*2+1,b=i*2+2;//比较儿子的值 
		if(b<sz&&heap[b]<heap[a])a=b;//如果有右儿子且右儿子值小于左儿子，处理左儿子（挑出最小孩子值的位置的赋给a） 
		if(heap[a]>=x)break;//如果没有大小颠倒则退出 
		heap[i]=heap[a];//把儿子的数值提上来 （大小颠倒）
		i=a; 
	} 
	heap[i]=x;
	
	return ret;
}












