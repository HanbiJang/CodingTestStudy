#include <iostream>
#include <vector>

using namespace std;

int N,M;
int arr[21][21];
int cnt[21]; // ���ؽ� ������ �Ȱ����� ǥ�� 
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
		// ���� �湮 
		for(int j=1; j<=N; j++){
			if (arr[i][j]==1 && cnt[j] == 0) {
				cnt[j]=1;
				re(j); // ���� �湮�ϱ� 
				
				cnt[j]=0; // (���ο�湮) �����湮 ����ϱ� 
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

