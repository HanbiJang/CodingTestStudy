#include <iostream>
using namespace std;

int main() {
	int N;
	int arr[100001];
	int cnt; 
	int max = -2147000000; 
	
	// 숫자 받기 
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}
	
	// 최대 부분 증가 판별하기 
	for(int i=1; i<N; i++){
		if(arr[i-1] <= arr[i]){ // 증가하면 
			cnt++;
			if(max < cnt) max = cnt;
		}
		else {
			cnt = 0;
		}
	}
	
	max+= 1;
	
	printf("%d", max);
	return 0;
}

