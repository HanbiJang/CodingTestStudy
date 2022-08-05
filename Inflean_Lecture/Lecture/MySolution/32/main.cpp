#include <iostream>

using namespace std;

int main() {
	int N;
	int arr[101];
	// C = 12, H = 1
	// 숫자 받기
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i] );
	}
	
	// 선택정렬
	int min;
	int idx;
	for(int i=0; i<N-1; i++){
		min = arr[i];
		idx = i;
		for(int j=i + 1; j<N; j++){
			if(min > arr[j]){
				min = arr[j];
				idx = j;
			}
		}
		
		int tmp = min;
		arr[idx] = arr[i];
		arr[i] = tmp;
		
	}	 	 
	
	for(int i=0; i<N; i++){
		printf("%d ",arr[i]);
	}

	
	return 0;
}

