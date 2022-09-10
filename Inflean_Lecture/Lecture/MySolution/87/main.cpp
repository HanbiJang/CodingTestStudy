#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N;
int map[22][22];
int dirx[8] = {0,0,-1,1,-1,-1,1,1}; //�����¿�밢���޿� 
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
	//�� => Ȯ���ϸ� 2
	//�ٴ� => Ȯ���ϸ� 3 
	q.push(make_pair(1,1));
	map[1][1] = map[1][1]==1? 2:3; //Ȯ���� 
	while(!q.empty()){
		pair<int,int> tmp = q.front();
		q.pop();
		
		int x = tmp.first;
		int y = tmp.second;
		
		//�湮ó��
		if(map[x][y]==0) map[x][y]=3;
		else if(map[x][y]==1) map[x][y]=2; 
		  
		bool isNew = false; 
		for(int i=0; i<8; i++){
			int nextx = x+dirx[i];
			int nexty = y+diry[i];
			
			if(nextx >=1 && nextx <=N && nexty>=1 && nexty<=N){
				if(map[nextx][nexty]<2){ //1�Ǵ� 0(��Ȯ��) 
					q.push(make_pair(nextx, nexty));
				}
			
				//���� Ȯ���� ���� �ٴ�  
				if(map[x][y]==3 && map[nextx][nexty]==1){//[1] ������ ã�� 						
					isNew = true;				
				}	
			}
									
		}		
		if(isNew) cnt++;
			
		
	}
	
	printf("%d", cnt);
	
	
	return 0;
}
