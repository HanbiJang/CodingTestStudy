#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	
	int N;
	string arr[31];
	int idx=0; //앞에서부터 얼마나 같은지 체크 
	
	//input 
	cin>>N;
	for(int i=0; i<N; i++){
		cin>>arr[i]; 
	}
	
	int min_=2147000000;
	
	//최대 공통 접두사 찾기
	for(int i=1; i<N; i++){
		for(int j=0; j<arr[i].size(); j++){ //글자수 확인 
			if(arr[0][j] == arr[i][j]){ //0번째 글자와 비교 
				idx=j;
			}
			else{
				break;
			}
		}
		if(min_>idx) min_ = idx;
	} 
	
	
	//output
	cout<<arr[0].substr(0,min_+1); 
	
	return 0;
}

