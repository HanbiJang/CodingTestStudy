#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N,C; // 마구간 개수 N, C마리 말 

int GetCount(int mid,vector<int> arr){
	// 넣은 말의 개수 
	int cnt = 1; // 그냥 첫번째 자리에 넣고 시작함 	
	int posX = arr[0]; // 첫번째 자리 말의 위치 
	
	// 다음 말부터 비교하며 거리 확인 
	for(int i=1; i<=N; i++){
		// 두 말의 거리 차 구하기 
		if( arr[i] -  posX >= mid ){ // 두 말의 거리차가 mid보다 더 크다면 
			cnt++; // 말을 놓음 
			posX = arr[i]; // 비교 말을 다음말로 전환 
		}
		else { // 두 말의 거리차가 mid보다 작다면 
			// 말을 놓을 수 없다. 다음 말을 조사하자? 
		}
	}	
	
	return cnt;
} 

int main() {
		
	scanf("%d %d", &N, &C);
	
	vector<int> arr(N); // 마구간의 좌표 
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}
	
	// binary search
	sort(arr.begin(), arr.end());
	
	// 결정해야 할 사항 = 가장 가까운 두 말의 최대거리 
	int lt = 1, rt = arr[N-1] - arr[0];
	int mid;
	int max = -214000000;
	while(lt <= rt) {
		mid = (lt+rt)/2;
		
		int num = GetCount(mid, arr);
		
		// 말 배치 가능 
		if(num >= C){
			lt = mid +1;
			max = mid;
		}
		else{ // 말 배치 불가능 
			rt = mid - 1;
		}
		
	}
	
	printf("%d", max);

	return 0;
}

