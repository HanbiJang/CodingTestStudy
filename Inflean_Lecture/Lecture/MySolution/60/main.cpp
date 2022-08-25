#include <iostream>

using namespace std;

int arr[11];
int cnt[11]; // 더하는 수의 인덱스 
int N;

void  re(int i){
	if(i>N){
		int sum1 = 0,sum2 = 0;
		for(int i=1; i<=N; i++){
			if(cnt[i] == 1){
				sum1 += arr[i];
			}
			else sum2 += arr[i];
		}
		if(sum1 == sum2 && sum1 != 0){
			printf("YES");
			exit(0);
		}

		return;
	}
	
	cnt[i] = 1; // 배열1에 포함 
	re(i+1);	

	cnt[i] = 0; // 배열2에 포함 
	re(i+1);
	
} 

int main() {
	
	scanf("%d", &N);
	
	for(int i=1; i<=N; i++){
		scanf("%d", &arr[i]);
	} 
	
	re(1);
	printf("NO");
	 
	return 0;
}

