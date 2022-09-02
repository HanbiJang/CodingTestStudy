#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct city{ //도시 정보 
	int b,cost; //a와 b지점을 연결하고 비용은 cost
	
	city(int b_, int cost_){
		b = b_;
		cost = cost_;
	}
	
	bool operator<(const city &other) const {
		return cost>other.cost; //최소힙을 위함 
	}
};

int V, E;
priority_queue<city> pQ; //최소힙 
vector<city> map[26];
int ch[26]; //방문했는지 확인
int sum; //비용의 합 

//프림 알고리즘: 인접한 노드에서부터 가장 최소의 코스트를 가지는 간선을 선택함 
int main() {	
	
	scanf("%d %d", &V, &E);
	
	for(int i=1; i<=E; i++){
		int a,b,c;
		scanf("%d %d %d", &a, &b, &c);		
		map[a].push_back(city(b,c)); //무방향 그래프이므로 둘다 넣어줌 
		map[b].push_back(city(a,c));
	}
	
	pQ.push(city(1,0)); //시작점 
	while(!pQ.empty()){
		city tmp = pQ.top(); //***현재 상황에서 가장 코스트가 작은 애가 나옴(최소힙) ***
		pQ.pop();
		
		int v = tmp.b;
		int cost = tmp.cost;
		
		if(ch[v]==0){ //방문하지 않았다면  =>
			sum+=cost; //방문하기 
			ch[v]=1;
			//인접한 노드 탐색하기 
			for(int i=0; i<map[v].size(); i++){
				pQ.push(map[v][i]);		
			}
			
		}
		
	}
	
	 

	printf("%d",sum);
	return 0;
}

