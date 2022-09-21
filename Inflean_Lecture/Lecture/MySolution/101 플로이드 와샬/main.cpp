#include <vector>
#include <iostream>

using namespace std;

int main() {
	int res=0;
	
	int map[101][101];
	int m=2000;
	 
    //input
	int N,M;
	scanf("%d %d", &N, &M);
		
	for(int i=1; i<=N; i++){ //�ʱ�ȭ
		for(int j=1; j<=N; j++){
			if(i==j) map[i][j]=0;
			else map[i][j]=m;
		}
	}
	for(int i=0; i<M; i++){
		int a,b,c;
		scanf("%d %d %d", &a,&b,&c);
		map[a][b]=c;
	}
	
	//�÷��̵� �ͼ�
	for(int k=1; k<=N; k++){ //������ k 
		
		for(int i=1; i<=N; i++){
			for(int j=1; j<=N; j++){
				map[i][j]= min(map[i][j],map[i][k]+map[k][j]); //���� 
			}
		}
	
	}
	
	//output 
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			if(map[i][j]>=m) printf("M ");
			else printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	
    return 0;
}
