#include <iostream>
#include <vector>

using namespace std;

//BFS 이진트리 넓이 우선 탐색 
int ch[8];
int main() {	
	
	// 1~7까지 있는 이진트리를 넓이 우선 탐색하면
	// 1->2->3->4->5->6->7
	
	//트리 만들기 
	vector<int> arr[8];

	for(int i=1; i<=6/*간선수*/; i++){
		int a,b;
		scanf("%d %d", &a, &b);
		
		arr[a].push_back(b);
	}
	
	//BFS
	
	//큐 : 시작 노드에 연결된 노드번호를 큐에 넣기 
	vector<int> queue;
		
	queue.push_back(1);	// 시작 노드 넣어주기 
	while( queue.size() != 0 ){
		int cur = queue[0];
		if(ch[cur]==0){ //A를 방문 안 했으면 
		
			//[1] 이 노드와 연결된 노드들을 큐에 집어넣기  
			for(int i=0; i< arr[cur].size(); i++){
				queue.push_back(arr[ cur ][i]);
			}
			
			//[2] A 방문 & 큐에서 삭제 
			ch[cur]=1;
			printf("%d ",cur);		
			queue.erase(queue.begin()); 
		} 
	}	 
	
	return 0;
}

