#include <iostream>
#include <vector>

using namespace std;

int arr[10010]; //수의 범위만큼 배열 할당 => 갯수를 적어줄 것
//short 형이면 안됨 

//***카운팅 정렬!!!  : 수의 범위가 작아서 가능 
int main(){ 
	
	int N;
	scanf("%d",&N);
	
	for(int i=0; i<N; i++){
		int a;
		scanf("%d",&a);
		
		arr[a]++;
	}
	
	for(int i=1; i<=10000; i++){ //***수의 범위까지 반복 
		
		for(int j=0; j<arr[i]; j++){
			printf("%d\n",i);
		}
		
	}
	
	return 0;
}

