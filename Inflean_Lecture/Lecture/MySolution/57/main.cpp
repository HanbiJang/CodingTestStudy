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
	
	// ����Լ� ���
	binary(N); 

	 
	return 0;
}

