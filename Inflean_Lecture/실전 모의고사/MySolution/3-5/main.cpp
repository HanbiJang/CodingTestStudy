#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int map[101][101];
int tmp[101][101]; //***각 칸까지의 방향 전환 수*** 

int x[] = {0,0,1,-1};
int y[] = {1,-1,0,0}; 

int N;

int main() {	
	

	int Tr, Tc;
	int Jr, Jc;
	cin>>N;
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			cin>>map[i][j];
		}
	}
	cin>>Tr>>Tc;
	cin>>Jr>>Jc;
	
	//가장 적은 방향 전환 구하라 
	queue< pair<int,int> > q;
	q.push(make_pair(Tr, Tc));
	tmp[Tr][Tc]=1; //음수로 하면 밑에 BFS에서 0으로 바뀌었을 때 다시 방문해서 값을 더 높은 값으로 재 갱신함  
	
	while(!q.empty()){
		int curr = q.front().first;
		int curc = q.front().second;
		q.pop();
		
		for(int i=0; i<4; i++){
			int nextr = x[i] + curr;
			int nextc = y[i] + curc;
			
			while(1){ //벽이 나올때까지 직진 진행 //갔던 곳을 또 지나쳐 갈 수 있음 
				if(nextr<1 || nextr>N || nextc<1 || nextc>N || map[nextr][nextc]==1) break; 

				//저장된 값이 없음(최초 방문) 
				if(tmp[nextr][nextc] == 0){ 
				
					tmp[nextr][nextc] = tmp[curr][curc] + 1; //한 값 저장 
					q.push(make_pair(nextr,nextc));
				}
				nextr += x[i] ; //*** (큐에는 안넣었지만 next증가=> 간곳을 지나쳐서안간곳 방문 가능) 
				nextc += y[i] ;
				
			}
		} 	
	}	
	if(tmp[Jr][Jc]==0) cout<<-1;
	else cout<<tmp[Jr][Jc]-2;
	
	return 0;
}

