#include <iostream>
using namespace std;

//N�� ����� �� K��°�� ���� ���� ����϶� 
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

