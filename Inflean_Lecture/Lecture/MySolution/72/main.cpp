#include <iostream>
#include <vector>
#include <queue>

using namespace std;


int main() {	

	int N,K;
	scanf("%d %d",&N, &K);
	
	queue<int> Q;
	
	for(int i=1; i<=N; i++){
		Q.push(i);
	}
	int cnt = 0;
	while(Q.size()!=1){
		if(++cnt != K){
			//�ڷ� ������ 
			Q.push(Q.front());
			
		}
		else{
			cnt=0; //���� ���� 
		}

		Q.pop();	
		
	}
	
	printf("%d", Q.front());
	
	return 0;
}

