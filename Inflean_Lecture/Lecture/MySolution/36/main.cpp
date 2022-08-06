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
	// selection sort
	int tmp; 
	for(i=1; i<N; i++){
		tmp =  arr[i]; // save i index element in tmp
		for(j=i-1; j>=0; j--){ // j : i-1 ~ 0
			
			if(arr[j] > tmp){ // arr[j]가 tmp보다 크면 뒤로 보냄 
				arr[j+1] = arr[j]; 
			}
			else break;
		}
		
		// arr[i] 가 숫자 크기대로  올바른 자리에 찾아가도록 더 큰 숫자들을 뒤로 밀음 
		// 위 작업 후, 올바른 자리에 (무조건 중복으로 밀린 값이 있으므로) 
		//그 인덱스 자리에 tmp를 넣음 ( 올바른 자리로 배치 해준 것) 
		
		// ... 위 작업 마무리 후 j+1 : 중복된 숫자가 존재  
		arr[j+1] = tmp; // because arr[i]'s value is keep changing... use old arr[i] (=tmp)
	}
	
	 
	// output
	for (int i=0; i<N; i++){
		printf("%d ", arr[i]);
	}			
	
	return 0;
}

