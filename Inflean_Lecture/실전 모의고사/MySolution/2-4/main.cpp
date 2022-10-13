#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int map[1001][1001];
int ch[1001][1001];

// 0 : 영희 이동 가능
// 1: 영희 이동 불가
// 2 영희 시작 위치
// 3: 기사 위치
// 4 : 산딸기 위치 

//산딸기->기사 가는 최단거리 

int x[]={0,0,1,-1};
int y[]={1,-1,0,0};

int cnt;

int main() {
	
	int W,H; //열,행
	cin>>W>>H;
	int startr, startc;
	for(int i=1; i<=H; i++){
		for(int j=1; j<=W; j++){
			cin>>map[i][j];
			
			if(map[i][j]==2){
				startr = i;
				startc = j;
			}
		}
	}	 
	
	//산딸기
	bool isGet = false;
	int tmp=0;
	
	queue<pair<int,int> > q;
	q.push({startr, startc});
	while(!q.empty()){
		int curr = q.front().first;
		int curc = q.front().second;
		q.pop();
		
		if(map[curr][curc]==3 && isGet){ //최종 목적 달성
			cnt+=tmp; 
			cout<<cnt; //출력 
			break;
		}
		
		if(map[curr][curc]==4){ //산딸기
			isGet=true;
			cnt+=tmp;
			tmp=0;
			cout<<cnt<<endl;
			//ch클리어
			for(int i=1; i<=H; i++){
				for(int j=1; j<=W; j++){
					cout<<map[i][j]<<" ";
				}	
				cout<<endl;
			}
			ch[curr][curc] = 4;
			for(int i=1; i<=H; i++){
				for(int j=1; j<=W; j++){
					cout<<ch[i][j]<<" ";
				}	
				cout<<endl;
			}			 
		}
		
		for(int i=0; i<4; i++){
			int nextr = curr + x[i];
			int nextc = curc + y[i];
			
			if(nextr<1 || nextc<1 || nextr>H || nextc>W
			|| map[nextr][nextc]==1 || (map[nextr][nextc]==3 && isGet==false)
			) continue;
			
			if(ch[nextr][nextc]==0){				 
				ch[nextr][nextc]=1;
				q.push(make_pair(nextr,nextc));
				tmp++;
				break; //한번 선택		
			}
		}		
	} 
	

	
	return 0;
}

