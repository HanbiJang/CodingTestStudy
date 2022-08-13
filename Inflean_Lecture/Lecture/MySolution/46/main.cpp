#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int N,K; // �۾���, ���� �ð� 
	int task[2002]; 
	int time, pos; // �귯���� �ð�, �۾� ��ȣ 
	int done= 0; // �Ϸ��� �۾� �� 
	int ans = 0; // [����] 
	
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
			// pos��°���� ���ʷ� 0�� �ƴ� �۾��� ������־�� �� 
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
 			
 		if( task[pos] > 0 ){ // �۾� �� 
			task[pos]--; // �۾�
			if(task[pos] == 0) done++;
			 
			// ��������... 
			pos = (++pos)%(N+1); 		
			time++;
		}
		else{ // �۾� �Ϸ� 
			pos = (++pos)%(N+1); // ��������... 
		}
 		if(pos==0) pos = 1;		
 			
	}	

	// output
	printf("%d",ans);

	return 0;
}

