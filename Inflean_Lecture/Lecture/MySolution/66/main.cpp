#include <iostream>
#include <vector>

using namespace std;

int check[30];
int cnt;
vector<int> map[30];
int N,M;//���,����

void re(int n){
	
	if(n==N){
		cnt++;
		return;
	} 
	else{		
		for(int i=0; i<map[n].size(); i++){
			if(check[map[n][i]]==0){
				check[map[n][i]] = 1;
				re(map[n][i]); //������� Ž�� 
				check[map[n][i]] = 0;				
			}

		}
		
	}
	
}

int main() {	
	
	// input	
	int a,b; 
	scanf("%d %d",&N,&M);
	
	//���� ����Ʈ�� ���� �׷��� ǥ���ϱ�****** 
	for(int i=1; i<=M; i++){
		scanf("%d %d",&a,&b);
		map[a].push_back(b);
	}
	
	// dfs
	check[1] = 1;
	re(1);
	printf("%d",cnt);
	

	return 0;
}

