#include <iostream>
using namespace std;

//N의 약수들 중 K번째로 작은 수를 출력하라 
int main(){
	
	ios_base::sync_with_stdio(false);
	
	int N,K;
	cin>>N>>K;
	
	int ii = 0;
	for(int i=1; i<=N; i++){
		if(N%i==0){
			ii++;
			if(ii==K){
				cout<<i;
				break;
			}
		}
	}
	
	if(ii<K){
		cout<<0;
	}

	return 0;
}

