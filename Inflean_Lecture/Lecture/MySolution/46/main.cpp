#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int N,K; // 작업량, 정전 시간 
	int task[2002]; 
	int time, pos; // 흘러가는 시간, 작업 번호 
	int done= 0; // 완료한 작업 수 
	int ans = 0; // [정답] 
	
	// get input
	scanf("%d", &N);
	for(int i=1; i<=N; i++){
		scanf("%d",&task[i]);
	}
	scanf("%d", &K); 
	
	// task start
	pos = 1;
	time = 0;
	
 	while(1){
 		if(done == N) {
 			ans = -1;
 			break;
		}
 		
		else if(time == K){
			// pos번째부터 최초로 0이 아닌 작업을 출력해주어야 함 
			for(int i=1; i<=N; i++){
				if(task[pos] != 0){
					ans = pos;
					break;
				}
				else pos = (++pos)%(N+1);
				
				if(pos==0) pos = 1;
			}
			break;
		}
 			
 		if( task[pos] > 0 ){ // 작업 전 
			task[pos]--; // 작업
			if(task[pos] == 0) done++;
			 
			// 다음으로... 
			pos = (++pos)%(N+1); 		
			time++;
		}
		else{ // 작업 완료 
			pos = (++pos)%(N+1); // 다음으로... 
		}
 		if(pos==0) pos = 1;		
 			
	}	

	// output
	printf("%d",ans);

	return 0;
}

