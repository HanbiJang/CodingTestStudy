#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct node{
	int a,b,cost;
	
	node(int a_, int b_, int cost_){
		a=a_;
		b=b_;
		cost=cost_;
	}
	bool operator<(const node &other)const{ //최소힙을 만들기 위함 
		return cost>other.cost;
	}
};

vector<int> ch(21,2147000000); //최소 비용 체크 배열 
vector<pair<int, int> > map[21];
//다익스트라 
int main() {	

	//input
	int N,M; 
	scanf("%d %d", &N, &M);
	for(int i=0; i<M; i++){
		int a,b,c;
		scanf("%d %d %d",&a, &b, &c);
		map[a].push_back(make_pair(b,c));
	}	 
	
	priority_queue<node> pQ;//(비용이) 최소힙 
	pQ.push(node(1,1,0));//1번노드 시작 
	ch[1] = 0; //1번 노드까지 비용 = 0 
	
	while(!pQ.empty()){
		int cur  = pQ.top().b; 
		int cost = pQ.top().cost; 
		pQ.pop();
		
		for(int i=0; i<map[cur].size();i++){
			int next = map[cur][i].first;//다음으로 갈 곳 
			int nextCost = map[cur][i].second + cost; //ch[now]; //다음 노드까지의 비용 
			
			if(ch[next] > nextCost){ //다음 노드까지의 경로 비용이 더 작다면 갱신 
				ch[next] = nextCost;
				pQ.push(node(cur,next,nextCost)); //큐에 넣고 다음에 방문할 것임 
			}
		} 
				
		
	}
	
	
	//output
	for(int i=2; i<=N; i++){
		printf("%d :" ,i);
		if(ch[i]<2147000000)
			printf("%d\n",ch[i]);
		else
			printf("impossible");
	}
	
	return 0;
}

