#define MAX_N 1000000
int prime[MAX_N]; //���������б� 
bool is_prime[MAX_N+1]; //is_prime[i]Ϊtrue��ʾi������ 

int sieve(int n){//����n���ڵ����� 
	int p=0;
	for(int i=0;i<=n;i++) is_prime[i]=true;
	is_prime[0]=is_prime[1]=true;
	for(int i=2;i<=n;i++){
		if(is_prime[i]){
			prime[p++]=i;
			for(int j=2*i;j<=n;j+=i) is_prime[j]=false;
		}
	} 
	return p;
}

int main(){
	
} 
