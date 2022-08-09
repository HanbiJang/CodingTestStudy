#include <iostream>
#include <vector>

using namespace std;

int ans[101]; // 정답 배열 => 0으로 초기화 

int main() {
	int N; // 수열 크기 
	int arr[101]; // inversion sequence 
		
	// get input
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i] );
	}	

	// 맨 뒤에서부터 수를 찾기
	for(int i=N-1; i>=0; i--){
		int pos = 0;
		int cnt = 0;
		// 해당 수 보다 큰 수의 인덱스를 구함 
		for(int j=0; j<N; j++){
			if( cnt == arr[i] ) break; // 큰 수의 개수가 같으면 pos의 증가 멈춤 
			
			else if( ans[j] > i+1 ){
				cnt++;
			}		
			pos++;		
		}	
		
		// 뒤 순서 애들을 뒤로 밀기 
		for(int j=N-1; j>=pos; j--){
			ans[j] = ans[j-1]; 
		}
		
		// pos에 새 요소 넣기 
		ans[pos] = i+1;
		
	} 
	
	// output
	for (int i=0; i<N; i++){
		printf("%d ", ans[i]);
	}				
	
	return 0;
}

