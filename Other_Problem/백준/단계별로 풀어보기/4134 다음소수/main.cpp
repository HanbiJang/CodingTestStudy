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
			break; //������ �ð��ʰ���!	
		}
	}
	return res;	
}

int main(){
	
	//������ �־����� ��, 
	//n���� ũ�ų� ���� �Ҽ� �� ���� ���� �Ҽ� ã�� ���α׷��� �ۼ��϶�
	
	//���Ʈ���� ��� ���! 
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

