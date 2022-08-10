#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
	
	int N,M;
	vector<int> ans;
	
	// get input
	scanf("%d" , &N);
	vector<int> arr(N);
	for (int i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}	
	scanf("%d" , &M);
	vector<int> arr2(M);
	for (int i=0; i<M; i++){
		scanf("%d" , &arr2[i]);
	}
	// 퀵정렬 알고리즘 
	sort(arr.begin(), arr.end());
	sort(arr2.begin(),arr2.end());
	
	// 합병 정렬 이론 이용
	int pos1 = 0;
	int pos2 = 0;
	
	while(1){
		if(pos1 >= N || pos2 >= M){
			break;
		}
		
		// 두 배열을 비교하여 더 작은 수를 가진 배열의 pos를 증가 
		if(arr[pos1] < arr2[pos2]){
			pos1++; 
		}
		else if (arr[pos1] == arr2[pos2]){
			ans.push_back(arr2[pos2]);
			pos1++;
			pos2++;
		} 
		else { // arr > arr2
			pos2++;
		}
	}
			
	
	// output
	for(int i=0; i<ans.size(); i++){
		printf("%d ", ans[i]);
	}

	return 0;
}
