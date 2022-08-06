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
	
    /*
    vector<int> a;
	vector<int> b;
	
	for (int i=0; i<N; i++){
		if(arr[i] > 0){
			a.push_back(arr[i]);
		}
		else{
			b.push_back(arr[i]);
		}
	}	
	
	for (int i=0; i<b.size(); i++){
		printf("%d ", b[i]);
	} 
	*/
	
	// 방법 [2] 
	// 버블 정렬 이용하기 (양수,음수 순서면 바꾸기) 
	for(int i=0; i<N-1; i++){
		for(int j=0; j<N-i-1; j++){
			if(arr[j]>0 && arr[j+1]<0){
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

