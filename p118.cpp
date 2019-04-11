#include<map>
#include<vector>
using namespace std;

bool is_prime(int n){//素性测试 
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}

vector<int> divisor(int n){//约数枚举 
	vector<int> res;//res数组将包含所有n的约数 
	for(int i=1;i*i<n;i++){
		if(n%i==0){
			res.push_back(i);
			if(i!=n/i) res.push_back(n/i);
		}
	}
	return res;
} 

map<int,int> prime_factor(int n){//分解质因数
	map<int,int> res;
	for(int i=2;i*i<=n;i++){
		while(n%i==0){
			++res[i];
			n/=i;
		}
	}
	if(n!=1) res[n]=1;
	return res;
}

int main(){
	
}
