#include <iostream>

using namespace std;

int main() {
	int N;
	int arr[101];

	// 숫자 받기
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i] );
	}
    
	 int maxidx; 
	 
	 for (int i=0; i<N-1; i++){
	 	maxidx = i;
	 	
	 	for(int j=i+1; j<N; j++){
	 		if(arr[maxidx] < arr[j]){
	 			maxidx = j;
			}
		 }
		 
		int tmp = arr[i];
		arr[i] = arr[maxidx];
		arr[maxidx] = tmp;	
	 }

    int s = arr[0]; // 제일 큰 수 
	int cnt = 1;
	
	for(int i=0; i<N; i++){
		if(arr[i]<s){
			s = arr[i];
			cnt++;
		}
		
		if(cnt == 3) {
			s = arr[i]; 
			break;
		}
	}
	    
	printf("%d" , s);
	
	return 0;
}

