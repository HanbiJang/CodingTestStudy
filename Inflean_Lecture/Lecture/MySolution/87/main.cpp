#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N;
int map[22][22];
int dirx[8] = {0,0,-1,1,-1,-1,1,1}; //상하좌우대각선왼우 
int diry[8] = {-1,1,0,0,-1,1,-1,1};
int cnt;
queue<pair<int,int> > q;

int main() {
	//input
	scanf("%d",&N);
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			scanf("%d", &map[i][j]);
		}
	}
	
	//bfs
	//섬 => 확인하면 2
	//바다 => 확인하면 3 
	q.push(make_pair(1,1));
	map[1][1] = map[1][1]==1? 2:3; //확인함 
	while(!q.empty()){
		pair<int,int> tmp = q.front();
		q.pop();
		
		int x = tmp.first;
		int y = tmp.second;
		
		//방문처리
		if(map[x][y]==0) map[x][y]=3;
		else if(map[x][y]==1) map[x][y]=2; 
		  
		bool isNew = false; 
		for(int i=0; i<8; i++){
			int nextx = x+dirx[i];
			int nexty = y+diry[i];
			
			if(nextx >=1 && nextx <=N && nexty>=1 && nexty<=N){
				if(map[nextx][nexty]<2){ //1또는 0(미확인) 
					q.push(make_pair(nextx, nexty));
				}
			
				//지금 확인한 곳이 바다  
				if(map[x][y]==3 && map[nextx][nexty]==1){//[1] 새섬을 찾음 						
					isNew = true;				
				}	
			}
									
		}		
		if(isNew) cnt++;
			
		
	}
	
	printf("%d", cnt);
	
	
	return 0;
}
