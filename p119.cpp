#define MAX_N 1000000
int prime[MAX_N]; //保存素数列表 
bool is_prime[MAX_N+1]; //is_prime[i]为true表示i是素数 

int sieve(int n){//返回n以内的素数 
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
