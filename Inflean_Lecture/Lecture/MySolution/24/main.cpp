#include <iostream>
using namespace std;
int arr2[100];
int main() {
	int N;	
	int arr[101];

	char* result = "YES";
	// 숫자 받기
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i=0; i<N-1; i++){
		int abs = arr[i] - arr[i+1];
		if (abs < 0) abs *= -1;
		
		if(abs >= 1 && abs <= N-1){
			if(arr2[abs] == 0){
				arr2[abs] = 1;
			}
			else {
				result = "NO";
				break;
			}

		}	
		else{
			result ="NO";
			break;
		}
	}
	
		
	printf("%s", result); 
	return 0;
}

