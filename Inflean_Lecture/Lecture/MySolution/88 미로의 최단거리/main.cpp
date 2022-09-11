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
	
	//�� ���������� �ִܰŸ��� ���� 
	while(!q.empty()){
		pair<int,int> tmp = q.front();
		int curx = tmp.first;
		int cury = tmp.second;
		q.pop();
		
		for(int i=0; i<4; i++){//�����¿� Ž�� 
			int nextx = tmp.first + x[i];
			int nexty = tmp.second + y[i];
			
			if((nextx<1 || nexty>7) || (nexty<1 || nexty>7)) continue; //����ó�� 
			
			if(map[nextx][nexty]==0){
				map[nextx][nexty] = map[curx][cury] + 1;						
				q.push(make_pair(nextx, nexty));
				
				//***���� üũ�� ���� �ּҰŸ� �ϰ��̴�***
				//���� : bfs ����̶� 1�� �����Ӹ��� ���°�, 2�� �����Ӹ��� ���°�, 3��... �̷������� ť����
				//��� ���߿� Ž���ϴ� ���� �̵����� ���ų� �� ŭ 
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
