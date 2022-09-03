#include <iostream>
#include <vector>

using namespace std;

struct node{
	int a;
	int b;
	int cost;
	
	node(int a_, int b_, int cost_){
		a = a_;
		b = b_;
		cost = cost_;
	}
	
};


//벨만 포드 알고리즘 => 모든 간선들에 대해 간선 횟수를 늘려감에 따라서 값을 갱신 
//음의 사이클이 없다는 가정. 1회 ~ n-1횟수 까지 (그 이상은 사이클 있음)
 
vector<int> ch(101, 2147000000);
vector< node > map;
int main() {	
	
	int N,M;
	scanf("%d %d", &N, &M);
	map.push_back(node(0,0,0));
	for(int i=1; i<=M; i++){
		int a,b,c;
		scanf("%d %d %d", &a, &b, &c);
		map.push_back(node(a,b,c));
	}
	
	int start, end;
	scanf("%d %d", &start, &end);
	
	ch[start] = 0;
	
	for(int i=1; i<=N-1; i++){ //간선 갯수 
		
		for(int j=1; j<=M;j++){ //***모든 간선들에 대해 실행 
			
			int next = map[j].b;
			int nextCost = ch[map[j].a] + map[j].cost;
			if(ch[next] > nextCost){ //값을 갱신 
				ch[next] = nextCost;
			} 			
		}
					
	}
	
	//사이클 확인 
	//N개째의 간선에 대해 실행 
	for(int j=1; j<=M;j++){ //***모든 간선들에 대해 실행 
		
		int next = map[j].b;
		int nextCost = ch[map[j].a] + map[j].cost;
		if(ch[next] > nextCost){ //값을 갱신 
			ch[next] = nextCost;
		} 			
	}
	
	printf("%d", ch[end] );
	
	return 0;
}
