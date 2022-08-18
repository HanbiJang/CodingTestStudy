#include <iostream>


using namespace std;

int main() {
	// 소인분해 시 소인수가 2또는 3 또는 5로만 이루어지는 수
	int cnt = 1; // 순서
	int N = 0;
	int ans = -1;
	int tmp;
	scanf("%d",&N);
 
 	// Ugly Number 구분 (Time Limit) 
	for(int i=2; cnt<N;i++){
		tmp = i;
		
		for(int j=2;;){
			if( tmp % j == 0){
				if( j!=2 && j!=3 && j!=5 ) break;
				tmp = tmp/j;
				
				if(tmp == 1) {
					cnt++;				
					if( cnt == N ) ans = i;												
					break;
				}			
								
			} 
			else j++;
		}		
	}	 
	
	
	// output
	printf("%d", ans);

	return 0;
}

