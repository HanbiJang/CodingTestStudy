#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main() {
	
	long long N,K; //작업의 개수 , 정전이 발생한 시간 
	
	cin>>N;
	vector<long long> arr(N+1);
	vector<long long> arr_(N+1); //노정렬 
	for(long long i=1; i<=N; i++){
		long long n;
		cin>>n;
		arr[i]=n;
		arr_[i]=n;
	}
	cin>>K; 
	
	sort(arr.begin(), arr.end());
	
	//멀티태스킹
	long long i = 1; //진행 중인 테스트 인덱스
	long long time_ = K; //남은 시간 	
	long long task = arr.size()-1; //남은 작업

	while(i<=N){ //한바퀴 돌리기 
		long long tmp = (arr[i] - arr[i-1]) * task;
		
		//결과 적용
		if(time_ - tmp < 0) {
			break;
		}
		
		else {
			time_ -= tmp;
			task--;
			
			if(task<=0) {
				cout<<"-1";
				exit(0);
			}				
		}	
		i++;
	}
		
	int cnt=0;
	long long target = time_ % task; //(양수)남은 시간 % 남은 작업 (앞에서부터 target번째 작업에서 종료됨)***

	for(long long j=1; j<=N; j++){ //순회 
		//i :마지막으로 진행 완료한 테스트 인덱스
		if(arr[i]<=arr_[j]){ //다음 테스크의 조건 : 이미 종료된 테스크보다 크기가 크거나 같아야 함 
			if(target==cnt ) {
				cout<<j;
				break;
			}
			cnt++;
		}	
	}
	
	return 0;
}
