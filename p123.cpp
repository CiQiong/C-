#include<cstdio>
typedef long long ll;

ll mod_pow(ll x,ll n,ll mod){
	ll res=1;
	while(n>0){
		if(n&1) res=res*x%mod;//如果二进制最低位为1，则乘上x^(2^i) 
		x=x*x%mod;//将x平方 
		n>>=1;//n右移一位 n/=2; 
	}
	return res;
}

ll mod_pow2(ll x,ll n,ll mod){
	if(n==0) return 1;
	ll res=mod_pow(x*x%mod,n/2,mod);
	if(n&1) res=res*x%mod;
	return res;
}

bool is_prime(int n){//素性测试 
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}

main(){
	int n;
	scanf("%d",&n);
	if(is_prime(n)) {
		printf("No\n");
		return 0;
	}
	for(int i=0;i<n;i++){
		if(mod_pow(i,n,n)!=i){
			printf("No\n");
			return 0;
		}
	}
	printf("Yes\n");
	return 0;
}
