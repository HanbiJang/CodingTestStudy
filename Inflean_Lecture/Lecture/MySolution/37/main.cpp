#include <iostream>
#include <vector>

using namespace std;

int main() {
	int S,N; // 캐시 크기 & 작업량 
	int arr[1001]; // 작업 목록 배열 
	int cash[20]; // 캐시 
	
	// get input
	scanf("%d %d", &S ,&N);
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i] );
	}
	
	// 삽입 정렬 '변형'
	// [0] 히트, 노히트의 차이 = 배열을 뒤로 미는 인덱스 범위 
	for(int i=0; i<N; i++){
		int pos = -1; // 캐시 히트 or 노히트 인덱스 
		
		for(int j=0; j<S; j++){ // 캐시에 작업이 있는지 찾기 
			if(cash[j] == arr[i]) pos = j; // 캐시 히트 
		}
		// 캐시 노히트 
		// [1] 캐시가 노히트라면 => 배열 '전체'를 뒤로 밀기  
		if(pos == -1){ 
			for(int j= S-1; j>=1; j--){
				cash[j] = cash[j-1];
			}
		}
		// 캐시 히트 
		// [2] 캐시가 히트라면 => 배열 중 캐시가 히트된 곳 1칸 앞전 ~ 맨앞까지 뒤로 밀기 
		else { 
			for(int j=pos; j>=1; j--){
				cash[j] = cash[j-1];
			}
		}
		
		// 맨 앞에 작업 추가하기 (공통 : 노히트,히트 모두) 
		cash[0] = arr[i];

	}
	
	// output
	for (int i=0; i<S; i++){
		printf("%d ", cash[i]);
	}				
	
	return 0;
}

