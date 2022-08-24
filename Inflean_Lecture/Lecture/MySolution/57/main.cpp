#include <iostream>

using namespace std;

void  binary(int i){
	
	if( i == 0 ){
		return;	
	} 
	else{
		
		binary(i/2);
		printf("%d",i%2);		
	}
		
} 

int main() {
	
	int N;
	scanf("%d", &N);
	
	// 재귀함수 사용
	binary(N); 

	 
	return 0;
}

