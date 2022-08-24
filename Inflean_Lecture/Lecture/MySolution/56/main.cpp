#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void  re(int i){
	//[1]
//	static int cnt = 1;
//	if(i<=0) return;
//	
//	printf("%d ",cnt);
//	cnt++;
//	
//	re(i-1);

	//[1]
	
	if(x==0) return;
	else{
		re(i-1);
		printf("%d", i);
	}

	
} 

int main() {
	
	int N;
	scanf("%d", &N);
	
	// 재귀함수 사용
	re(3);
	 
	return 0;
}

