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
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			
			//섬발견 => 이어지는 섬을 다 0으로 만들기 (방문) 
			if(map[i][j]==1){
				
				q.push(make_pair(i,j));
				map[i][j] = 0;
				
				while(!q.empty()){
					pair<int,int> tmp = q.front();
					q.pop();
					
					int x = tmp.first;
					int y = tmp.second;
		
					for(int i=0; i<8; i++){
						int nextx = x+dirx[i];
						int nexty = y+diry[i];
						
						if(nextx >=1 && nextx <=N && nexty>=1 && nexty<=N){
							if(map[nextx][nexty]==1){ //섬일때 (미확인) 
								map[nextx][nexty] = 0; //방문 처리 
								q.push(make_pair(nextx, nexty));
							}
						
						}									
					}				
				}
				
				cnt++;
			}
			//바다 발견 => 넘어가기 
			else{
				continue;
			}

		}
	}
	
	printf("%d", cnt);
	
	return 0;
}
