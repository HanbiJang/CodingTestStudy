#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N,M; // 모든 라이브갯수, 녹화 가능 DVD갯수 
int arr[1001];

bool Count(int mid){
	// 나눠지는 지 확인 
	int tmpsum =0;
	int cnt = 0;
	bool isEnable = true;
	for(int i=0; i<N; i++){
		tmpsum += arr[i];
		// 나눠짐 
		if(tmpsum <= mid){
			
			if ( i+1 >= N ) cnt++; // 나눠지는데 마지막 인덱스 	 	
			else if(tmpsum + arr[i+1] > mid){
				cnt++;
				tmpsum = 0;	
			}
			 // M개보다 많이 나눠질 경우 false 
			if(cnt > M) isEnable = false;  
	
		}
		// 안 나눠짐
		else isEnable = false;
	}
	
	return isEnable;
}

int main() {

	int rt,lt,mid,cnt;
	int min;
	int sum = 0;
	// get input
	scanf("%d %d", &N ,&M);	
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i] );
		sum += arr[i];
	}
	
	// binary search ( 결정 알고리즘 )
	// 결정해야 할 것 = 나누는 수 (DVD길이)
	lt = 1;
	rt = sum;
	
	while(lt <= rt){
		mid = (lt+rt)/2;
			
		bool isEnable = Count(mid);
				
		if( isEnable ){
			// 적게 탐색
			rt = mid - 1; 
			min = mid;
		}
		else{
			// 크게 탐색
			lt = mid + 1; 
		}		
	}
	 	
	// output
	printf("%d",min); 

	return 0;
}

