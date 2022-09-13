#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

int map[26][26], ch[26][26]; //맵 정보, 방문 정보 
int x[4] = {0,-1,0,1};
int y[4] = {-1,0,1,0};

struct target{ 
	int x,y,dis; //목표 위치, 현재 심바와의 거리 
	target(int x_, int y_,int dis_){
		x=x_;
		y=y_;
		dis=dis_;
	}
	
	bool operator< (const target &other)const{
		if(dis!=other.dis) return dis>other.dis; //첫째 조건 : 심바와의 거리 
		if(x!=other.x) return x>other.x; //둘째 조건: 최소힙 가장 상위 
		return y>other.y; //셋째조건 : 가장 왼쪽 
	}
};

//우선순위 큐 사용 
int main() {
	int N; //격자 크기 
	//===
	int time=0; //초 카운트 
	int startx, starty; //심바 위치 
	int body=2; //심바크기 
	int eat=0; //현재 먹은양  
	int totalEat = 0; //총먹은양 
	int rab=0; //모든 토끼수 
	
	
	//input
	scanf("%d",&N);
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			int a;
			scanf("%d",&a);	
			map[i][j] = a;
			
			if(a==9) { //심바위치 
				startx=i;
				starty=j;
				map[i][j]=0;
			}
			else if(a!=0) { //토끼수 
				rab++; 
			}
		}
	} 
	
	//bfs => 토끼를 찾아서 먹이를 먹을 때마다 ***큐를 초기화함*** 
	priority_queue< target > q;
	q.push(target(startx,starty,0)); //심바의 위치에서 스타트 
	
	while(!q.empty()){
		int curx = q.top().x;
		int cury = q.top().y;
		int curdist = q.top().dis;
		q.pop();
		
		//먹을 토끼가 있는 경우 처리 (**실제로 심바가 이동**) 
		if(map[curx][cury]<body && map[curx][cury]>0){
			
			//잡아먹기	
			time=curdist; 
			eat++;
			totalEat++;
			map[curx][cury]=0;
			if(eat==body){ //사이즈업 
				body++;
				eat=0;
			}
			
			//조기종료: 다먹어서 끝남 
			if(totalEat==rab){
				printf("%d",time);
				exit(0);
			}
			
			//후처리 = 초기화
			while(!q.empty()) q.pop();
			for(int i=1; i<=N;i++)	for(int j=1; j<=N;j++)  ch[i][j]=0;
		
		} 
		
		//(토끼를 찾을때까지) 다음 위치 탐색 (**실제로 심바가 가는 것 아님**)	
		for(int i=0; i<4; i++){ //상하좌우
			int nextx = curx + x[i];
			int nexty = cury + y[i];
			
			if(nextx<1 || nextx>N || nexty<1 || nexty>N || map[nextx][nexty]>body || ch[nextx][nexty]!=0 ) continue;
			
			q.push(target(nextx, nexty, curdist+1));			
			ch[nextx][nexty]=1;
		} 
		
	}	
	
	//종료 (더이상 먹을 수 있는 토끼가 없음) 
	printf("%d",time); 
	
	return 0;
}
