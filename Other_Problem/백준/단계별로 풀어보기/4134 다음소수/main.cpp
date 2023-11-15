#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(long long n){
	
	if(n<=1) return false;
	
	bool res = true;
	for(long long i=2; i<=sqrt(n);i++){
		if(n%i==0){
			res=false;
			break; //없으면 시간초과남!	
		}
	}
	return res;	
}

int main(){
	
	//정수가 주어졌을 때, 
	//n보다 크거나 같은 소수 중 가장 작은 소수 찾는 프로그램을 작성하라
	
	//브루트포스 방법 사용! 
	int t; 
	scanf("%d",&t);
	
	for(int i=0; i<t; i++){
		long long a;
		scanf("%lld",&a);
		
		long long res = a;
		
		while(!isPrime(res)){
			res++;
		}

		printf("%lld\n",res);
	}
	
		
	return 0;
}

