#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int map[8][8];
int x[4]={0,0,-1,1};
int y[4]={1,-1,0,0};

int main() {

	for(int i=1; i<=7; i++){
		for(int j=1; j<=7; j++){
			scanf("%d",&map[i][j]);		
		}
	}
	
	//bfs
	int cnt;
	queue< pair<int,int> > q;
	q.push(make_pair(1,1));
	
	//각 지점까지의 최단거리를 적음 
	while(!q.empty()){
		pair<int,int> tmp = q.front();
		int curx = tmp.first;
		int cury = tmp.second;
		q.pop();
		
		for(int i=0; i<4; i++){//상하좌우 탐색 
			int nextx = tmp.first + x[i];
			int nexty = tmp.second + y[i];
			
			if((nextx<1 || nexty>7) || (nexty<1 || nexty>7)) continue; //예외처리 
			
			if(map[nextx][nexty]==0){
				map[nextx][nexty] = map[curx][cury] + 1;						
				q.push(make_pair(nextx, nexty));
				
				//***먼저 체크된 곳이 최소거리 일것이다***
				//이유 : bfs 방식이라서 1번 움직임만에 가는곳, 2번 움직임만에 가는곳, 3번... 이런식으로 큐에들어감
				//고로 나중에 탐색하는 곳은 이동수가 같거나 더 큼 
				if(nextx == 7 && nexty == 7){
					printf("%d",map[7][7]);
					exit(0);
				}
			}
			
		}
		
	}		
		
	
	if(map[7][7]==0) printf("-1"); 
	//else printf("%d",map[7][7]);
	return 0;
}
