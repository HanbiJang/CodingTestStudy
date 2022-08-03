#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;	
	int cnt = 0;
	// 숫자 받기
	scanf("%d", &N);

	// 일의 자리만 떼어서3이면 cnt 증가 
	for(int i=1; i<=N; i++){
		int tmp = i;
		
		while(tmp != 0){
			if(tmp % 10 == 3) cnt++;
			
			tmp /= 10;
		}
		
	}
	
	printf("%d",cnt);
	
	return 0;
}

