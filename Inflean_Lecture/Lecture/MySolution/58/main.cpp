#include <iostream>

using namespace std;

void  re(int i){
	
	if(i>7){
		return;
	}
	else{
		// printf("%d ",i); // 전위 순회 
		re(i*2); 
		// printf("%d ",i); // 위중 순회 
		re(i*2+1);
		printf("%d ",i); // 후위 순회 
	}
} 

int main() {
	
	int N;
	scanf("%d", &N); // N번부터 이진트리 7까지 순회 
	
	re(N);

	 
	return 0;
}

