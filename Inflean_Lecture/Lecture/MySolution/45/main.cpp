#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	int N,K; // ���ڼ�, ������(��)
	int ans, pos, cnt,call;
	// get input
	scanf("%d %d", &N, &K); 
	//init
	vector<int> prince(N+1); // 1���� ���� 
	for(int i=1; i<=N; i++){
		prince[i] = i;
	}
	
	call = 1;
	cnt = 0;
	pos = 1;
	 
	while(1){
		
		if(cnt == N-1) break;
		
		if( prince[pos] != -1 ){ // ������ ���� 
	
			if(K == call) { // ������ ������ �� 
				//printf("%d\n", prince[pos]); 
				prince[pos] = -1; // ���� 
				call = 0;
				cnt++;
			} 
			
			call = (++call)%N; // 1~N �� ���� 
			pos = (++pos)%(N+1); // ���� ���ȣ ���� 
		}
		else pos = (++pos)%(N+1); // ���� ���ȣ ���� 
		if(pos==0) pos = 1;				
	}	
	
	
	// output
	for(int i=1; i<=N; i++){
		if(prince[i]!=-1) ans = prince[i];
	}
	printf("%d", ans );
	
	return 0;
}

