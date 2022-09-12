#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int max_= 0;
int map[1001][1001]; //토마토 정보 배열 + 토마토의 익은 날수를 적을 것임 
int total;
int x[4]={0,0,1,-1};
int y[4]={1,-1,0,0};

int main() {
	
	int N,M;
	
	//input
	scanf("%d %d", &M, &N);
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			int a;
			scanf("%d", &a);
			if (a!=-1) total++; //모든 토마토 갯수 
			map[i][j]=a;
		}
	}
	
	//bfs : 동시 작업이 일어나야 => 첫시작이 중요 *** 익은 토마토를 한꺼번에 집어넣음 ***
	int curToma=0;
	queue<pair<int,int> > q;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){		
			if(map[i][j]==1) {
				q.push(make_pair(i,j));
				curToma++;
			}		
		}
	}
	
	//이후로는 보통 bfs를 진행해도 동시 작업이 일어남 
	while(!q.empty()){
		int curx = q.front().first;
		int cury = q.front().second;
		q.pop();
		//상하좌우 확인 
		for(int k=0;k<4;k++){
			if(curx+x[k]<1||curx+x[k]>N || cury+y[k]<1 ||cury+y[k]>M) continue;
			if(map[curx+x[k]][cury+y[k]]==0){
				curToma++;
				map[curx+x[k]][cury+y[k]]=map[curx][cury]+1;
				q.push(make_pair(curx+x[k],cury+y[k]));
				if(max_<map[curx+x[k]][cury+y[k]]) max_ = map[curx+x[k]][cury+y[k]];
			}				
		}
	}

	
	if(curToma != total) printf("-1");
	else printf("%d",max_-1);

	return 0;
}
