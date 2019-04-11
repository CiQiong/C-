//#define MAX_L 1000000
//#define MAX_SQRT_B 1000000 
#include<algorithm>
using namespace std;
typedef long long ll;
const ll MAX_L=1000000000;
const ll MAX_SQRT_B=1000000;
bool is_prime[MAX_L];
bool is_prime_small[MAX_SQRT_B];

void segment_sieve(ll a,ll b){
	for(int i=0;(ll)i*i<b;i++) is_prime_small[i]=true;
	for(int i=0;i<b-a;i++) is_prime[i]=true;
	
	for(int i=2;(ll)i*i<b;i++){
		if(is_prime_small[i]){
			for(int j=2*i;(ll)j*j<b;j+=i) is_prime_small[j]=false;
			for(ll j=max(2LL,(a+i-1)/i)*i;j<b;j+=i) is_prime[j-a]=false;
		}
	}
}

int main(){
	
}
