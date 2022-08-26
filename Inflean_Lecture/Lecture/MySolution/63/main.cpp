#include <iostream>
#include <vector>

using namespace std;

int main() {

	int N,M;
	scanf("%d %d", &N, &M);
	
	vector<int> tmp(N+1,0);
	vector< vector<int> > arr(N+1,tmp);
	
	for(int i=1; i<=M; i++){
		int row, cul, cos;
		scanf("%d %d %d", &row, &cul, &cos);
		
		arr[row][cul] = cos;
	}
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			printf("%d ", arr[i][j] );
		}
		printf("\n");
	}
	

	return 0;
}

