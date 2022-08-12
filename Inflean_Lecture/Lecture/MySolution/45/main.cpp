#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	int N,K; // 왕자수, 금지어(수)
	int ans, pos, cnt,call;
	// get input
	scanf("%d %d", &N, &K); 
	//init
	vector<int> prince(N+1); // 1부터 시작 
	for(int i=1; i<=N; i++){
		prince[i] = i;
	}
	
	call = 1;
	cnt = 0;
	pos = 1;
	 
	while(1){
		
		if(cnt == N-1) break;
		
		if( prince[pos] != -1 ){ // 죽음의 왕자 
	
			if(K == call) { // 금지어 말했을 시 
				//printf("%d\n", prince[pos]); 
				prince[pos] = -1; // 죽음 
				call = 0;
				cnt++;
			} 
			
			call = (++call)%N; // 1~N 수 증가 
			pos = (++pos)%(N+1); // 왕자 등번호 증가 
		}
		else pos = (++pos)%(N+1); // 왕자 등번호 증가 
		if(pos==0) pos = 1;				
	}	
	
	
	// output
	for(int i=1; i<=N; i++){
		if(prince[i]!=-1) ans = prince[i];
	}
	printf("%d", ans );
	
	return 0;
}

