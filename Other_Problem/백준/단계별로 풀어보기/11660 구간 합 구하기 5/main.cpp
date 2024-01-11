#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int N, M;
	//ǥ�� ũ�� N*N, ���� ���ؾ��ϴ� Ƚ�� M
	scanf("%d %d", &N, &M);
	
	vector<vector<int> > maps(N+1, vector<int>(N+1,0));
	vector<vector<int> > sums(N+1, vector<int>(N+1,0));
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			int num;
			scanf("%d", &num);
			
			maps[i][j] = num;
		}
	}
	
	//�� �۾�
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){		
			sums[i][j] = sums[i-1][j] + sums[i][j-1] - sums[i-1][j-1] + maps[i][j];
		}
	}
	
	for(int i=0; i<M; i++){
		int x1, x2, y1, y2;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		
		//�� ���
		int sideA = sums[x2][y1-1];
		int sideB =	sums[x1-1][y2];
		int sameC = sums[x1-1][y1-1];
		int sum  = sums[x2][y2] - sideA - sideB + sameC;
		
		printf("%d\n",sum);
	}
		
	return 0;
}

