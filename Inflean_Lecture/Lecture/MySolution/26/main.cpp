#include <iostream>
using namespace std;

int arr2[100001];
int main() {
	int N;	
	int arr[100001];
	int brr[100001];
	
	// 숫자 받기
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i]);
		// b 배열 초기화
		brr[i] = i+1; // 현재 등수 
	}
	
	for(int i=0; i<N; i++){
		for(int j=0; j<i; j++){ // 비교  
			if(arr[i]>arr[j]) brr[i]--;
		}
	}

	for(int i=0; i<N; i++){
		printf("%d ",brr[i]);
	}
	
	return 0;
}

