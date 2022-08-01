#include <iostream>
using namespace std;

// 브루트 포스 
int arr2[100];
int main() {
	int N;	
	int arr[101];
	int brr[101];
	
	// 숫자 받기
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i]);
		// b 배열 초기화
		brr[i] = 1;
	}
	
	// ** 등수 처리 **
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(arr[i] < arr[j]){   // 점수가 더 낮으면 등수 증가시킴 
				brr[i]++;
			}
		}
	}
	
	// 출력하기 
	for(int i=0; i<N; i++){
		printf("%d ", brr[i]);
	}

	return 0;
}

