#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N,M; // 자연수, 특정 수	
	int rt,lt,mid;
	// get input
	scanf("%d %d", &N ,&M);
	
	vector<int> arr(N);	
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i] );
	}

	sort(arr.begin(),arr.end());
	
	// binary search
	rt = N-1;
	lt = 0;

	
	while(rt >= lt){
		mid = (rt+lt)/2;	
		
		if(arr[mid] == M){
			printf("%d",mid+1);
			break;
		}
		else if(arr[mid] > M){
			// 왼쪽 탐색해야 함
			rt = mid -1; 
		}
		else{
			// 오른쪽 탐색해야 함
			lt = mid+1; 
		}
		
	}		

	return 0;
}

