#include <iostream>
#include <vector>

using namespace std;

int N,M;
int arr[21][21];
int cnt[21]; // 버텍스 갔는지 안갔는지 표시 
int ans;

void re(int i){
	
	if(cnt[N]==1){
		ans++;
		
//		for(int i=1; i<=N; i++){
//			printf("%d",cnt[i]);
//		}
		printf("\n");
		return;
	}
	
	else{
		cnt[i]=1;
		// 인접 방문 
		for(int j=1; j<=N; j++){
			if (arr[i][j]==1 && cnt[j] == 0) {
				cnt[j]=1;
				re(j); // 인접 방문하기 
				
				cnt[j]=0; // (새로운방문) 이전방문 취소하기 
			}
		} 
	
	}
}

int main() {	
	
	// input
	scanf("%d %d", &N, &M);
	for(int i=1; i<=M; i++){
		int row, cul;
		scanf("%d %d", &row, &cul );
		arr[row][cul] = 1;
	}
	
	re(1);
	printf("%d",ans);

	return 0;
}

