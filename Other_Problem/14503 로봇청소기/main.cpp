#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int map[52][52]; //지도 상태 
int ch[52][52]; //청소 여부 

//int ro[4] = {0,3,2,1};
int xx[4]={-1,0,1,0};
int yy[4]={0,1,0,-1}; //그에따른 방향

int main(){
	
	int N,M; //세로크기, 가로크기 
	scanf("%d %d", &N, &M);
	int x,y,r;
	scanf("%d %d %d", &x, &y, &r);
	
	for(int i=0 ; i<N; i++){
		for(int j=0; j<M; j++){
			int c;
			scanf("%d",&c);
			map[i][j] = c;
		}
	}
	
	//시뮬레이션
	int cnt=0; //청소한 영역
	int curro=r; //회전 방향
	 
	queue<pair<int,int> > q;
	q.push(make_pair(x,y));
	ch[x][y]=1;
	cnt=1;
	
	while(!q.empty()){
		int curx = q.front().first;
		int cury = q.front().second;
		q.pop();
		
		while(!q.empty()) q.pop(); //큐 청소 
		 
		for(int i=0; i<4; i++){ //2. 현재 방향 기준 왼쪽 방향~탐색
			int nextro;
			nextro = curro == 0? 3 : curro-1;
			
			int nextx = curx+xx[nextro];
			int nexty = cury+yy[nextro];
					
			if(ch[nextx][nexty]==0 && map[nextx][nexty]==0){
				curro = nextro; //그 방향으로 회전
				q.push(make_pair(nextx, nexty)); //한칸 전진				
				ch[nextx][nexty]=++cnt; //청소 			
				break;
			} 
			else{
				curro = nextro; //그 방향으로 회전
				if(i!=3){				
					continue; //왼쪽 방향 탐색 	
				}
					
				else{ //네방향 모두 가지 못함 
					//한칸 후진		
					int nextx=curx + xx[curro]*-1;
					int nexty=cury + yy[curro]*-1;		
			
					if(map[nextx][nexty]== 1){ //그만함 
						printf("%d", cnt);
						exit(0);
					}
					q.push(make_pair(nextx, nexty));
				}
						
			}
		}
	}
	
	
	printf("%d",cnt);
	 
	return 0;
}
