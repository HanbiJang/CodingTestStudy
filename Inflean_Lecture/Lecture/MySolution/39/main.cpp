#include <iostream>
#include <vector>

using namespace std;
int main() {
	
	int N,M;
	int arr[101], arr2[101];
	vector<int> ans;
	
	// get input
	scanf("%d" , &N);
	for (int i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}	
	scanf("%d" , &M);
	for (int i=0; i<M; i++){
		scanf("%d" , &arr2[i]);
	}
	
	// �պ� ���� �̷� �̿�
	int pos1 = 0;
	int pos2 = 0;
	
	while(1){
		if(pos1 >= N || pos2 >= M){
			// ������ ���� �迭 ä��� 
			for(int i=pos1; i<N; i++ ){
				ans.push_back(arr[i]);
			}
			
			for(int i=pos2; i<M; i++){
				ans.push_back(arr2[i]);
			}
			
			break;
		}
		
		if(arr[pos1] < arr2[pos2]){
			ans.push_back(arr[pos1]);
			pos1++; 
		}
		else{
			ans.push_back(arr2[pos2]);
			pos2++;
		} 
	}
			
	
	// output
	for(int i=0; i<N+M; i++){
		printf("%d ", ans[i]);
	}

	return 0;
}
