#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;	
	
	// 숫자 받기
	scanf("%d", &N);
	vector<int> prr(N+1,0);  // 나눠지는 수 배열 (j가 나눠지는 수 자체라 N+1까지) 
	
	for(int i=2; i<=N; i++){
		int tmp = i; // 나눠질 수 (i의 값을 바꾸지 않으려고 임시로) 
		int j = 2; // 나누는 소수 
		
		// 나누는 수가 무조건 '소수'로만 나눠지는 이유 
		// : 작은 수(2~)부터 순서대로 나눠지므로 복합수로 나눠질 일이 없음 
		while(tmp != 1){
			if(tmp%j == 0){ 
				tmp/=j;
				prr[j]++;
			}
			else j++; // j로 나눠지지 않을 경우 j+1로 한수 크게함 
		}
	}
	
	printf("%d! = ", N);
	for(int i=2; i<=N; i++){
		if(prr[i]!=0) // N!은 (= 2 * 3 * ... * N) N이하의 소수를 무조건 포함함 
			printf("%d ", prr[i]);
	}
	
	
	
	return 0;
}

