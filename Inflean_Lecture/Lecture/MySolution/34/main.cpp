#include <iostream>
//#include <vector>

using namespace std;

int main() {
	int N;
	int arr[101];

	// get input
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i] );
	}
	
	int i,j;
	// Bubble sort
	for(i=0; i<N-1; i++){
		for(j=0; j<N-1-i; j++){ // N-1-i : 전개할때마다 가장 큰 수가 맨뒤로 옴 
			if(arr[j] > arr[j+1]){ 
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}	
	 
	// output
	for (int i=0; i<N; i++){
		printf("%d ", arr[i]);
	}			
	
	return 0;
}

