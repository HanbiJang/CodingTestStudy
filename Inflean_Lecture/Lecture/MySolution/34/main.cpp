#include <iostream>
//#include <vector>

using namespace std;

int main() {
	int N;
	int arr[101];

	// 숫자 받기
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i] );
	}
	
	// 버블 정렬
	for(int i=0; i<N-1; i++){
		for(int j=0; j<N-i-1; j++){
			if(arr[j]>arr[j+1]){
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
			
		}
	}
	
	 
	// 출력 
	for (int i=0; i<N; i++){
		printf("%d ", arr[i]);
	}			
	
	return 0;
}

