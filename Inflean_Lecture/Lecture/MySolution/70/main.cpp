#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N,M;
vector<int> arr[21];
int min_[22]; // 각 지점 별 최소값 
int ch[22]; // 갔는지 안 갔는지 표시 
// BFS  
int main() {	
	
	// 그래프 만들기 
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
		
		//인접 노드들 집어넣기 
		//min 갱신하기 
		for(int i=0; i<arr[Q.front()].size();i++){
			if(ch[arr[Q.front()][i]]==0){
				ch[ arr[Q.front()][i] ]=1;
						
				//인접노드 최소거리 = 현재 차례인 노드 + 1 
				//노드를 탐색하며 최소 거리 = 인접노드들 순서대로
				//탐색하며 전까지 값에 1씩 더하는 거랑 똑같음 
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

