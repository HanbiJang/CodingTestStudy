#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N,M;
vector<int> arr[21];
int min_[22]; // �� ���� �� �ּҰ� 
int ch[22]; // ������ �� ������ ǥ�� 
// BFS  
int main() {	
	
	// �׷��� ����� 
	scanf("%d %d", &N, &M);
	for(int i=1; i<=M; i++){
		int a,b;
		scanf("%d %d", &a, &b);
		
		arr[a].push_back(b);
	}
	
	//BFS	
	queue<int> Q;
	Q.push(1);
	
	while(!Q.empty()){
		
		//���� ���� ����ֱ� 
		//min �����ϱ� 
		for(int i=0; i<arr[Q.front()].size();i++){
			if(ch[arr[Q.front()][i]]==0){
				ch[ arr[Q.front()][i] ]=1;
						
				//������� �ּҰŸ� = ���� ������ ��� + 1 
				//��带 Ž���ϸ� �ּ� �Ÿ� = �������� �������
				//Ž���ϸ� ������ ���� 1�� ���ϴ� �Ŷ� �Ȱ��� 
				min_[ arr[Q.front()][i] ] = min_[Q.front()]+1;
						
				Q.push(arr[Q.front()][i]);
			}

		}
			
		Q.pop();	
		
	}
	
	for(int i=2; i<=N;i++){
		printf("%d : %d\n",i,min_[i]);
	}
	

	return 0;
}

