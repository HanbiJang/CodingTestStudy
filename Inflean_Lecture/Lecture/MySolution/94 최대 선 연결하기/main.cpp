#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[101];
vector<int> ans(101); //인덱스까지 해당 수가 이어지는 곳까지  인덱스를 잘랐을 때의 최대로 이을 수 있는  선 개수 

int main() {
	
	//input 
	int N;
	scanf("%d", &N); 
	for(int i=1; i<=N; i++){
		scanf("%d",&arr[i]);
	}
	
	//최대선 찾기
	ans[1]=1;
	for(int i=2; i<=N; i++){
		//이전 인덱스에서 최대값 찾기 
		int max_ = 0;
		for(int j=1; j<=i-1; j++){		
			if( arr[i]>arr[j] && max_<ans[j]){
				max_=ans[j];
			}
		}
		ans[i]=max_+1;
		
	} 

	//output
	//for(int i=1; i<=N; i++) printf("ans: %d \n", ans[i]);
	printf("%d", *max_element(ans.begin(), ans.end()));	

	return 0;
}
