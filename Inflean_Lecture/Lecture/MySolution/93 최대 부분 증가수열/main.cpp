#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[1001]; //input

int main() {
	
	int N;	
	vector<int> ans(1001,0); //각 인덱스에 해당하는 수가 마지막으로 오는 수열의 최대 길이 

	//input
	scanf("%d",&N);	
	for(int i=1; i<=N; i++){
		scanf("%d", &arr[i]);
	}	
	
	ans[1]=1; 
	for(int i=2; i<=N; i++){
		//이전 케이스에서 수열 값이 작고 가장 길이가 큰 값을 찾아냄 
		int max_=0; //길이이므로 0으로 최소값 둬도 됨 
		for(int j=1; j<=i-1; j++){
			if ((max_ < ans[j])&& (arr[i] > arr[j])){
				max_ = ans[j];
			}			
		}
		
		ans[i] = max_+1;
		
	}

	
	//output
	printf("%d", *max_element(ans.begin(), ans.end())); //최대값 찾기 
	
	return 0;
}
