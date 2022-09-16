#include <iostream>
#include <vector>

using namespace std;
 
int map[21][21];

int main() {
	int N;
	
	//input	
	scanf("%d",&N);
	//�����ڸ��� ���Ѵ��  
	for(int i=0; i<=N; i++) for(int j=0; j<=N; j++) map[i][j]=2147000000;
	for(int i=1; i<=N; i++) for(int j=1; j<=N; j++) scanf("%d", &map[i][j]);		
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			if(i==1 && j==1) continue;//���� 
			map[i][j] = min(map[i-1][j]+map[i][j],map[i][j-1]+map[i][j]);
		}
	}
	
	//output
	printf("%d",map[N][N]);
	
	return 0;
}
