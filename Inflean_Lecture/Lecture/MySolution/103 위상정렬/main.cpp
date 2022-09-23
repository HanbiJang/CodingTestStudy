#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int main() {
	
	vector<pair<int,int> > arr; //일 정보 (일번호a ,일번호b) 
	queue<int> q;
	
	int N,M;
	
	//input 
	scanf("%d %d", &N, &M);
	
	vector<int> degree(N+1); //앞전에 처리해줘야 하는 일들의 수가 적힌 배열: 분명히 0포함(시작점) 
	
	for(int i=1; i<=M; i++){ //일 순서  
		int a,b;
		scanf("%d %d",&a, &b);
		
		degree[b]++;
		arr.push_back(make_pair(a,b));
	}
	
	//start
	for(int i=1; i<=N; i++){
		if(degree[i]==0) q.push(i); //시작점 (값이 0 인) 일번호를 넣어줌 
	}
	
	while(!q.empty()){
		int tmp = q.front(); //처리할 일 번호 
		printf("%d ",tmp); //일을 처리 
		q.pop();
		
		for(int i=0; i<arr.size(); i++){ //일 순서 정보 순회 
			if(arr[i].first==tmp && degree[arr[i].second]>0){ 
				degree[arr[i].second]--; //현재 일이 시작점일때, 다음에 해줘야 하는 일번호의 degree 1 감소(앞전에 해줘야하는 일수degree) 
				if(degree[arr[i].second]==0) q.push(arr[i].second); //앞전에 처리해야할 일 수가 0이면 큐에 넣기 
			}
		}					
	}	
	
    return 0;
}
